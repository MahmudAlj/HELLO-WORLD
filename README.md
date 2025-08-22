# HELLO-WORLD (Konsol Animasyonu)

Konsolda küçük bir animasyon gösterir: Önce rastgele harflerden oluşan satırlar akar, **son satırda hedef ifade net biçimde yazdırılır**. Ardından harf harf birikerek oluşan ikinci mini animasyon oynar. Program, kullanıcıdan **ifade** (metin) ve **satır sayısı** alarak çıktıyı özelleştirir.

## Özellikler
- Rastgele harf akışı üzerinde hedef metnin ortaya çıkması
- Kullanıcıdan alınan ifade ve satır sayısı ile özelleştirilebilir çıktı
- “Harf harf birikme” efekti (typewriter hissi)
- Yalnızca standart C++ kütüphaneleri

## Gereksinimler
- C++17 (veya C++11+) derleyici: g++ / clang++ / MSVC
- (Linux/macOS) iş parçacığı için `-pthread`

## Derleme ve Çalıştırma

### Linux / macOS
```bash
g++ -std=c++17 -O2 -pthread hello_world.cpp -o hello_world
./hello_world
```

### Windows (MSVC)
```bat
cl /EHsc /std:c++17 hello_world.cpp
hello_world.exe
```

## Kullanım
1. Sabit ifade **“HELLO WORLD”** ile kısa bir giriş animasyonu.
2. Konsolda sizden **ifade** ve **satır sayısı** istenir.
3. Belirttiğiniz satır sayısı kadar akış gösterilir; **son satırda ifadeniz** çıkar.
4. En sonda harf harf biriken ikinci animasyon oynar.

Örnek:
```
Bunun gibi bir animasyonunu yapmak istediğiniz cümleyi veya kelimeyi giriniz !
> OpenAI rocks
satır sayısını giriniz !
> 6
```

## Klasör Yapısı
```
.
├─ hello_world.cpp
├─ README.md
└─ screenshots/
   └─ demo.png
```

## Kısa Mimari
- **`class first`**
  - **`first()`**: 6 satırlık giriş animasyonu; son satır `HELLO WORLD`.
  - **`first(int)`**: `"hello world i am mahmud"` metnini harf harf birikmeli efektle yazar.
  - **`take()`**: Kullanıcıdan ifade (`getline`) ve satır sayısı (`cin`) alır.
  - **`calculation()`**: İfade uzunluğunu ve boşluk indekslerini hesaplar.
  - **`wordwrite()`**: `satir - 1` satır rastgele harf; **son satırda kullanıcı ifadesi**.

## Lisans
MIT
