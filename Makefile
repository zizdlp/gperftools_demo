gcc_cpu:
	gcc gperf/cpu_profile.cc -lprofiler -o ./gcc_tmp/cpu_profile
	./gcc_tmp/cpu_profile
	pprof --svg ./gcc_tmp/cpu_profile ./output/cpu_profile.prof > ./output/cpu_profile.svg
bazel_cpu:
	bazel run //gperf:cpu_profile
	./bazel-bin/gperf/cpu_profile
	pprof --svg ./bazel-bin/gperf/cpu_profile ./output/cpu_profile.prof > ./output/cpu_profile.svg
.PHONY: gcc_cpu bazel_cpu


