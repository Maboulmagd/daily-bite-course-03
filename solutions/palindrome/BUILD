cc_library(
    name = "palindrome",
    srcs = ["palindrome.cc"],
    hdrs = ["palindrome.h"],
)

cc_test(
    name = "palindrome_test",
    srcs = ["palindrome_test.cc"],
    deps = [
        ":palindrome",
        "@catch2//:catch2_main",
    ],
)
