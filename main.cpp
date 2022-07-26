#include <stdio.h> // for printf
#include <netinet/in.h>

int main(int argc, char* argv[]) {
	uint32_t m;
	uint32_t n;
	FILE* file1 = fopen(argv[1],"rb");	//scanf("%x", &m);
	FILE* file2 = fopen(argv[2],"rb");	//scanf("%x",&n);
	fread(&m, 1, 4, file1);
	fread(&n, 1, 4, file2);
	uint32_t a = ntohl(m);
	uint32_t b = ntohl(n);
	uint32_t sum = a+b;
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",a,a,b,b,sum,sum);
	return 0;
}

