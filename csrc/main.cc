
#include "upf.h"

int main(int argc, char **argv)
{
  upf::UPFEnv upf_instance;

  upf_instance.run();
  upf_instance.dump_upf();
}
