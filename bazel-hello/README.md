# Abseil Bazel Quick Start #

Make sure that [Bazel](https://bazel.build/) (version 7.0 or newer) is installed
on your system.

Then build and run the example:

```bash
 $git clone https://github.com/abseil/abseil-hello.git
 cd abseil-hello/bazel-hello
 bazel run //:hello_main
```

To run the tests:

```bash
bazel test //:hello_test
```
