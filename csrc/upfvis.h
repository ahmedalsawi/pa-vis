#pragma once

#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

namespace upf
{

  class UPFObject
  {
  };

  class PowerNet;
  class PowerPort;
  class PowerDomain;

  enum class PORT_DIR
  {
    IN,
    OUT,
    INOUT
  };

  class PowerNet : UPFObject
  {

  public:
    std::string name;
    std::string domain;

    friend std::ostream &operator<<(std::ostream &os, const PowerNet &pn)
    {
      os << "Power Net: Name: " << pn.name << std::endl;
      return os;
    }
  };

  class PowerPort : UPFObject
  {
    std::string name;
    PORT_DIR direction = PORT_DIR::IN; // default is "in"

    // deduced from create_supply_port... if -domain is used, it creates object in the same logical hierarchy as domain. if not, it uses active scope.
    std::string domain;
    std::string scope;

  public:
    PowerPort(string name) : name(name) {}
    friend std::ostream &operator<<(std::ostream &os,
                                    const PowerPort &pp)
    {
      os << "Power Port: Name: " << pp.name << std::endl;
      return os;
    }
  };

  class PowerDomain : UPFObject
  {
    std::string name;
    std::string scope;
    std::vector<std::string> elements;
    std::vector<std::string> exclude_elements;
    bool include_scope;

  public:
    PowerDomain(string name, string scope) : name(name), scope(scope)
    {
    }

    string upfify()
    {
      string str{"create_power_domain" + this->name};
      return str;
    }

    friend std::ostream &
    operator<<(std::ostream &os,
               const PowerDomain &pd)
    {
      os << "Power Domain: Name: " + pd.name << std::endl;
      os << "Power Domain: elements: " << std::endl;
      for (auto el : pd.elements)
      {
        os << "\t" << el << std::endl;
      }
      return os;
    }
  };

  class UPFEnv
  {
  public:
    std::string current_scope;
    std::string root;

    UPFEnv() = default;

    void run()
    {
    }

    void dump_upf()
    {
    }
  };
};
