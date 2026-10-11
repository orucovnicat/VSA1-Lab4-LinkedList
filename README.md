# Lab 01 — Birtərəfli əlaqəli siyahı (Singly Linked List)

## Layihə haqqında

Bu laboratoriya işində C++ dilində birtərəfli əlaqəli siyahı üzərində əsas əməliyyatlar araşdırılıb. Məqsəd siyahının necə qurulduğunu, düyünlərin göstəricilər (pointer) vasitəsilə necə bağlandığını və hər əməliyyatın nə qədər səmərəli olduğunu başa düşməkdir.

## Əlaqəli siyahı nədir?

Əlaqəli siyahı verilənləri ardıcıl saxlayan strukturdur. Massivdən fərqli olaraq elementlər yaddaşda ardıcıl yerləşmir. Hər element ayrıca düyündür (node) və iki hissədən ibarətdir:

- **data**: düyünün saxladığı qiymət
- **next**: növbəti düyünü göstərən göstərici

Siyahı `head` göstəricisi ilə başlayır, sonuncu düyünün `next`-i isə `nullptr` olur. İstənilən elementə çatmaq üçün siyahını baştan gəzmək lazımdır.

## Araşdırılan əməliyyatlar

1. **Əlavə etmə:** siyahının əvvəlinə və sonuna yeni düyün əlavə etmək. Əvvələ əlavə etmək sürətlidir, sona əlavə etmək üçün isə siyahını sonuna qədər gəzmək lazımdır.
2. **Silmə:** verilmiş qiymətə malik düyünü tapıb siyahıdan çıxarmaq və yaddaşı azad etmək. Silinəcək düyün əvvəldə, ortada, sonda ola bilər, siyahı da boş ola bilər, bu hallar ayrıca yoxlanılır.
3. **Axtarış:** elementin siyahıda olub-olmadığını düyünləri ardıcıl gəzərək yoxlamaq.
4. **Uzunluq:** düyünləri gəzərək sayğac vasitəsilə siyahının uzunluğunu tapmaq.
5. **Minimum və maksimum:** siyahını bir dəfə gəzərək ən kiçik və ən böyük elementi müəyyən etmək.
6. **Tərsinə çevirmə:** yeni düyün yaratmadan göstəricilərin istiqamətini dəyişərək siyahının sırasını tərsinə çevirmək.

## Nəticələr

- Əlaqəli siyahıda indeksə birbaşa müraciət yoxdur, buna görə axtarış, silmə, uzunluq və min/max əməliyyatları O(n) vaxt aparır.
- Yalnız siyahının əvvəlinə əlavə etmək O(1)-dir.
- Göstəriciləri dəyişərkən növbəti düyünün ünvanını əvvəlcədən yadda saxlamaq vacibdir, əks halda siyahının qalan hissəsi itir.
- Silinən düyün `delete` ilə azad edilmədikdə yaddaş sızması (memory leak) yaranır.

## Fayllar

`task1.cpp`, `task2.cpp`, `Task3.cpp`, `task4.cpp`, `task5.cpp`, `task6.cpp`: hər tapşırığın kodu.
Ətraflı hesabat: `Lab01_Nicat_Orucov.docx`.