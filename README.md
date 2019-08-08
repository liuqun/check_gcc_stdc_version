# 测试gcc和clang编译器是否支持C99/C11/C17标准
原理：测试C语言编译器预置宏定义 `__STDC_VERSION__` 的取值，

# ISO 标准
- ISO/IEC 9899:2018 定义 `__STDC_VERSION__` 为 `201710L`
  ISO网站链接：https://www.iso.org/standard/74528.html
- ISO/IEC 9899:2011 定义 `__STDC_VERSION__` 为 `201112L`
- ISO/IEC 9899:1999 定义 `__STDC_VERSION__` 为 `199901L`
