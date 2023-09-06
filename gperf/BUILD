package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "cpu_profile",
    srcs = ["cpu_profile.cc"],
    linkopts=[
        "-lprofiler"
    ],
    linkstatic = True,
    deps=[
        "@gperftools//:gperftools-lib",
    ],

)
