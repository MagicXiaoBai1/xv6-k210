 sudo docker run -ti --rm -v /home/ubuntu/try_for_love/xv6-k210:/xv6 --privileged=true docker.educg.net/cg/os-contest:2024p6 /bin/bash

sudo docker run -ti --rm -v /home/ubuntu/try_for_love/testsuits-for-oskernel/riscv-syscalls-testing:/testing --privileged=true docker.educg.net/cg/os-contest:2024p6 /bin/bash

 # wend
 https://oyer359xyx.feishu.cn/docx/SGDNdxCkuoMSV6xUgX5cPJCTnMe

 (gdb) file vmlinux           # vmlinux 位于目录 linux-4.19.172 中
(gdb) target remote :1234
(gdb) break start_kernel     # 有些文档建议使用 hb 硬件断点，我在本地测试使用 break 也是 ok 的
(gdb) c                      # 启动调试，则内核会停止在 start_kernel 函数处

docker ps -a
docker exec -it 2f4d9cb4198e /bin/bash