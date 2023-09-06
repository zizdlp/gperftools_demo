# gperftools_demo
# gperftools with bazel build


### proxy 

```shell
export https_proxy="http://127.0.0.1:1080"
export http_proxy="http://127.0.0.1:1080"
```

### gperftool 安装

使用docker hub镜像：

```
zizdlp/gperf
```


### test

1. 可以选择使用gcc
```shell
make gcc_cpu
```

2. 也可以选择使用bazel

```shell
make bazel_cpu
```

### 查看结果

生成svg 在output 目录