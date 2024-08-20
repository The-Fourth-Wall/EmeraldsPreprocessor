#include "../libs/cSpec/export/cSpec.h"
#include "preprocessor_number_of_elements/preprocessor_number_of_elements.module.spec.h"
#include "preprocessor_version/preprocessor_version.module.spec.h"

int main(void) {
  cspec_run_suite("all", {
    T_preprocessor_number_of_elements();
    T_preprocessor_version();
  });
}
