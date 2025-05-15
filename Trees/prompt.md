## POSTORDER TRAVERSAL CHALLENGE
File ini dibuat untuk memenuhi tugas Mata Kuliah Algoritma dan Struktur Data, yang kali ini fokusnya adalah Struktur Data "Trees". Tantangan yang dikerjakan berasal dari platform HackerRank yang berjudul "Tree: Postorder Traversal". Dalam menyelesaikan tantangan tersebut, saya menggunakan bantuan ChatGPT untuk mencari clue dan penjelasan tentang struktur data jenis Trees, serta pendekatan terbaik yang dapat digunakan untuk menyelesaikan tantangan tersebut.

## Deskripsi Tantangan
Pada tantangan tersebut, kita diminta untuk menyelesaikan sebuah fungsi bernama postOrder, dimana fungsi ini menerima satu parameter: pointer ke root dari sebuah pohon biner (binary tree). Fungsi ini akan mencetak nilai-nilai dari pohon tersebut dalam urutan traversal postorder sebagai satu baris dengan nilai-nilai yang dipisahkan spasi.

Format Inputannya berupa kode uji yang akan digunakan untuk mengecek fungsi yang dibuat dengan batasan 1 ≤ jumlah node dalam pohon ≤ 500. 
Format Output: Cetak traversal postorder pohon tersebut sebagai satu baris dengan nilai-nilai yang dipisahkan spasi.

## Prompt
https://www.hackerrank.com/challenges/tree-postorder-traversal/problem?isFullScreen=true 
pada link tersebut terdapat sebuah challaenge dimana kita diminta untuk membuat fungsi bernama postOrder(root) yang mencetak nilai-nilai dalam binary tree dalam urutan postorder. berlakulah sebagai mahasiswa s1 jurusan informatika, dan selesaikan challenge tersebut. buat dahulu penjelasan singkat mengenai bagaimana cara menyelesaikan challenge tersebut, lalu tulis code nya dalam bahasa c++

## Penjelasan:
Traversal postorder dilakukan dengan urutan:
1. Kunjungi subtree kiri,
2. Kunjungi subtree kanan,
3. Kunjungi root.

## Penjelasan Strategi Penyelesaian:
Untuk menyelesaikan challenge ini, kita perlu memahami traversal postorder pada pohon biner. Pada postorder traversal, kita memproses node secara rekursif dengan urutan:

**Kiri → Kanan → Akar**

Langkah penyelesaian:
1. Buat class Node sebagai representasi dari node pohon biner.
2. Implementasikan fungsi rekursif postOrder(Node* root).
3. Dalam fungsi ini, jika root kosong (null), cukup return.
4. Rekursif ke subtree kiri, lalu kanan, lalu cetak nilai root saat ini.

## Catatan:

1. Program menerima input dari pengguna berupa jumlah node dan kemudian nilai-nilai node.
2. Nilai-nilai tersebut dimasukkan ke dalam pohon biner sesuai aturan BST (Binary Search Tree).
3. Fungsi postOrder mencetak hasil traversal dalam format yang diminta.

