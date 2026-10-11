Ad, soyad: Nicat Orucov
Qrup: KOM25A
Laboratoriya işi 1
Əlaqəli siyahılar (Linked Lists)

Yerinə yetirilmiş tapşırıqlar:
- Siyahının əvvəlinə element əlavə etmə
- Siyahının sonuna element əlavə etmə
- Düyünün silinməsi
- Düyünün axtarışı
- Siyahının uzunluğunun tapılması
- Minimum və maksimum elementin tapılması
- Siyahının tərsinə çevrilməsi

Proqramın iş prinsipi:
Proqram birtərəfli əlaqəli siyahıdan istifadə edir. Hər düyün (Node) qiyməti (data) və növbəti düyünü göstərən göstəricini (next) saxlayır. Siyahı head göstəricisi ilə başlayır, sonuncu düyün isə nullptr-ə işarə edir. Bütün əməliyyatlar düyünləri göstəricilər vasitəsilə gəzməklə yerinə yetirilir:
- Əvvələ əlavə etmə: yeni düyün yaradılır, onun next-i köhnə head-ə bağlanır və head yeni düyünə keçirilir.
- Sona əlavə etmə: siyahı sonuncu düyünə qədər gəzilir və onun next-i yeni düyünə bağlanır.
- Düyünün silinməsi: verilmiş qiymətli düyün tapılır, əvvəlki düyün növbətiyə bağlanır və yaddaş delete ilə azad edilir.
- Axtarış: qiymət tapılana və ya siyahı bitənə qədər düyünlər ardıcıl yoxlanılır.
- Uzunluq: siyahı gəzilərkən düyünlər sayılır.
- Minimum və maksimum: siyahı bir dəfə gəzilir və hər qiymət cari minimum və maksimumla müqayisə edilir.
- Tərsinə çevirmə: hər düyünün next göstəricisi əvvəlki düyünə yönəldilir, sonda head sonuncu düyünə təyin olunur.
