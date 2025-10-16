#include <stdio.h>

int main() {
	
    // short: so nguyen nho, 2 byte
    short a = 10;
    
    // int: so nguyen co ban, 4 byte
    int b = 1000;
    
    // long: so nguyen dai, 4 byte
    long c = 190803L;
	
	// long long: so nguyen rat dai, 8 byte
    long long d = 2309082003LL;
    
    // unsigned short: so nguyen nho khong dau, 2 byte
    unsigned short e = 20;
    
    // unsigned int: so nguyen khong dau, 4 byte
    unsigned int f = 2007;
    
    // unsigned long: so nguyen dai khong dau, 4 byte
    unsigned long g = 230507UL;
    
    // unsigned long long: so nguyen rat dai khong dau, 8 byte
    unsigned long long h = 2305200709ULL;
    
    // char: ky tu, 1 byte
    char i = 'W';
    
    // In gia tri bien ra man hinh
    printf("short: %d\n", a);
    printf("int: %d\n", b);
    printf("long: %ld\n", c);
    printf("long long: %lld\n", d);
    printf("unsigned short: %u\n", e);
    printf("unsigned int: %u\n", f);
    printf("unsigned long: %lu\n", g);
    printf("unsigned long long: %llu\n", h);
    printf("char: %c\n", i);
    
    return 0;
}
