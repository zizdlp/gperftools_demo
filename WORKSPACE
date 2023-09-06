load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")  ## python use ,go use etc


new_local_repository(
    name = "gperftools",
    build_file_content = """
cc_library(
    name = "gperftools-lib",
    srcs = ["lib/libtcmalloc.so",
            "lib/libprofiler.so",
            ],
    hdrs = glob(["include/gperftools/*.h"]),
    includes = ["include/gperftools"],
    visibility = ["//visibility:public"]
)
    """,
    path = "/usr/local",
)
