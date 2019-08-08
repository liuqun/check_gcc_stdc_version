#include <stdio.h>

int main()
{
	printf("测试开始：\n");
	printf("__STDC_VERSION__ = %ld\n", __STDC_VERSION__);

#if __STDC_VERSION__ >= 201710L
	printf("恭喜：当前编译器支持2018年6月正式发布的ISO/IEC 9899:2018标准(俗称C17)\n");
	printf("      ISO标准官方网站 https://www.iso.org/standard/74528.html\n");
	printf("      维基百科词条 https://en.wikipedia.org/wiki/C18_(C_standard_revision)\n");
#endif

#if __STDC_VERSION__ >= 201112L
	printf("恭喜：当前编译器支持2011年C11标准 (推荐使用C11)\n");
#endif


#if __STDC_VERSION__ <= 199901L
	printf("抱歉：当前编译器仅支持1999年C99标准, 不支持C11\n");
#endif

	printf("测试结束\n");
	return 0;
}
