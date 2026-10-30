/*
D. LATIHAN MANDIRI

1. Menambahkan data pada SiNilai v0.1
Tambahkan satu data baru ke dalam program, misalnya program studi atau
semester. Jika menggunakan program studi, tipe datanya dapat menggunakan
string karena berisi teks. Jika menggunakan semester, tipe datanya dapat
menggunakan int karena berisi bilangan bulat.
Sebelum menulis kode, tentukan terlebih dahulu tipe data yang sesuai.

2. Mengubah output pada tipe_dasar.cpp
Program diubah agar nilai boolean ditampilkan sebagai true atau false,
bukan sebagai angka 1 atau 0. Hal ini dapat dilakukan dengan menggunakan
fitur boolalpha pada output.
Dengan begitu, nilai true akan ditampilkan sebagai "true" dan nilai false
akan ditampilkan sebagai "false".

3. Perbedaan int nilai = 85.7 dan int nilai{85.7}
Pada int nilai = 85.7, nilai desimal akan dikonversi menjadi bilangan bulat,
sehingga bagian desimalnya dapat hilang dan nilai menjadi 85.
Sedangkan pada int nilai{85.7}, compiler akan memberikan error karena
inisialisasi menggunakan kurung kurawal tidak mengizinkan penyempitan tipe
data (narrowing conversion) dari double ke int.
Artinya, penggunaan kurung kurawal dapat membantu mencegah kehilangan data
secara tidak sengaja.

4. Nama variabel yang kurang baik
Nama variabel yang terlalu singkat atau tidak jelas dapat membuat kode
sulit dipahami. Contohnya:
- x       -> jumlahSiswa
- a       -> nilaiAkhir
- data1   -> dataMahasiswa
- n       -> jumlahNilai
- hasil   -> rataRataNilai

Nama variabel yang lebih jelas membuat kode lebih mudah dibaca, dipahami,
dan dipelihara oleh programmer lain.

KESIMPULAN:
Latihan mandiri ini bertujuan untuk memahami penggunaan tipe data,
boolean, cara inisialisasi variabel, serta pentingnya memberikan nama
variabel yang jelas dan sesuai dengan isi data.
*/
