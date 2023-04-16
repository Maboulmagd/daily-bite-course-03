cc_library(
    name = "words",
    srcs = ["words.cc"],
    hdrs = ["words.h"],
)

cc_test(
    name = "words_test",
    srcs = ["words_test.cc"],
    deps = [
        ":words",
        "@catch2//:catch2_main",
    ],
)
