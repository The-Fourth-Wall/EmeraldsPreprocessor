#include "../libs/cSpec/export/cSpec.h"
#include "../src/EmeraldsPreprocessor.h"

module(T_preprocessor_version, {
  it("returns the current version", {
    assert_that_int(PREPROCESSOR_C_VERSION equals to 2023);
  });
})
