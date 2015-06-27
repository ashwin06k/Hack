On running the binary on radare2, we find that the code has a main() and a fun()
fun() is a recursive function which calculates the factorial of a number and returns the value.
main() takes an input number.
0xa(10) is passed as argument to fun(). fun() returns 10!.
    For success, 10!/input should be equal to 86400(0x15180).
Input should be 42 - The answer to life, universe and everything.
