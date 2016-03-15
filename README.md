#Memory attack examples 

Simple examples about general buffer overflow and memory attack. Compiled with GCC 4.8.4 on Lubuntu 14.04 LTS 32-bit.

To compile code with no protections, add "`-fno-stack-protector -z execstack` to `gcc` command. To disable ASRL and NX protections, run `echo 0 | sudo tee /proc/sys/kernel/randomize_va_space`

"withcanaries" is compiled with buffer overflow protections, "nocanaries" without protections.