# Çok Büyük Sayıların Faktöryel Hesabı

İlkel veri tipleri ile tutamadığımız sayıların faktöriyelini hesaplar.

Mingw derleyicisinde çalıştırmak için makefile dosyası eklenmiştir.

Programda faktöriyeli hesaplarken:

Örneğin 5!'i hesaplar iken 1.2 [0]...[2] -> 2.3 [0]...[6] -> 6.4 [0]...[4] elde = 2 -> [0]...[2][4] -> 4.5 [0]...[2][0] elde = 2 -> Onlar basamağındaki eleman da 5 ile çarpıp elde toplanır orda çıkan elde olarak tutulur. [0]...[2][0] elde = 1 -> Eldemiz yüzler basamağına yazılır [0]...[1][2][0]
Bu dizinin elemanlarının sonuç olan 3 elemanı listeye alınıp yazdırılır.

# Programı mingw derleyicisi ile başlatmak için;

İlk önce Mingw'yi kurunuz. Sonrasında ortam değişkenlerinde PATH'e Mingw'yi kurduğunuz yerdeki bin klasörünü ekleyiniz. Daha sonra komut isteminde rar'dan çıkarttığınız klasöre geliniz ve mingw32-make yazınız.
