# 测试gcc和clang编译器是否支持C99/C11/C17标准
原理：测试C语言编译器预置宏定义 `__STDC_VERSION__` 的取值，

# ISO 标准
- ISO/IEC 9899:2018 定义 `__STDC_VERSION__` 为 `201710L`
  ISO网站链接：https://www.iso.org/standard/74528.html
- ISO/IEC 9899:2011 定义 `__STDC_VERSION__` 为 `201112L`
- ISO/IEC 9899:1999 定义 `__STDC_VERSION__` 为 `199901L`

# 网络资料
1. ISO官方网站 https://www.iso.org/standard/74528.html 可以付费下载正式版本的C语言2018版本国际标准
2. 维基百科词条
  - `https://en.wikipedia.org/wiki/C18_(C_standard_revision)`
  - `https://en.wikipedia.org/wiki/C11_(C_standard_revision)`
  - `https://en.wikipedia.org/wiki/C99`
3. 一个网站 www.iso-9899.info: 提供 ISO/IEC 9899 各个版本的C语言标准免费下载
  - http://www.iso-9899.info/wiki/The_Standard
  - C2x尚未发布, 官网可免费下载N2346草案版本 http://www.open-std.org/jtc1/sc22/wg14/www/docs/n2346.pdf
  - C18标准(原名是C17标准) ISO/IEC 9899:2018 (N2176最终草案版本) 附件需要翻墙才能下载[附件 c17_updated_proposed_fdis.pdf](https://web.archive.org/web/20181230041359if_/http://www.open-std.org/jtc1/sc22/wg14/www/abq/c17_updated_proposed_fdis.pdf)
  - C11标准 ISO/IEC 9899:2011 (官网可免费下载N1570草案版本) http://www.open-std.org/jtc1/sc22/WG14/www/docs/n1570.pdf
  - C99标准 ISO/IEC 9899:1999 (官网可免费下载N1256草案版本) http://www.open-std.org/jtc1/sc22/WG14/www/docs/n1256.pdf
  - ANSI X3.159-1989和ISO/IEC 9899:1990是最老的C语言国际标准, 因年代过于久远, 目前已经无法从官网下载. 需要查询国外公开发行的纸质版本.

4. https://stackoverflow.com/questions/81656/where-do-i-find-the-current-c-or-c-standard-documents
