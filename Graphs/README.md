- Nama: Muhammad Fajar Rezki Ramadhan
- NIM: D121241011
- Level Difficulty: Medium
- Problem Link: https://www.hackerrank.com/challenges/components-in-graph/problem
- Short Approach Summary:
  
  ###  **Tujuan**
  
  * Menentukan ukuran **komponen terkecil dan terbesar** dalam graph tak berarah.
  * Hanya menghitung **komponen yang terdiri dari dua node atau lebih**.
  
  ---
  
  ###  **Input**
  
  * Sebuah array 2D `gb`, berisi `n` buah pasangan node `[u, v]` yang menyatakan edge dalam graph.
  * Nilai node:
  
    * `1 ≤ u ≤ N`
    * `N+1 ≤ v ≤ 2N`
  
  ---
  
  ###  **Proses**
  
  1. **Bangun Graph:**
  
     * Gunakan adjacency list untuk menyimpan koneksi antar node.
  
  2. **Inisialisasi:**
  
     * Siapkan array visited dan variabel untuk menyimpan ukuran terkecil dan terbesar.
  
  3. **Traversal Graph:**
  
     * Gunakan **BFS** untuk menelusuri setiap komponen yang belum dikunjungi.
     * Hitung ukuran komponen (jumlah node yang saling terhubung).
  
  4. **Seleksi Komponen:**
  
     * Hanya simpan ukuran komponen yang memiliki **≥ 2 node**.
  
  5. **Update Ukuran Minimum dan Maksimum:**
  
     * Bandingkan ukuran komponen saat ini dengan nilai minimum dan maksimum yang tersimpan.
  
  ---
  
  ###  **Output**
  
  * Sebuah array berisi dua integer:
    `[ukuran_komponen_terkecil, ukuran_komponen_terbesar]`
  
  ---
  
  ###  **Catatan**
  
  * Komponen yang hanya terdiri dari satu node **tidak dihitung**.
  * Graph dapat memiliki hingga **15.000 edge** dan **30.000 node**.
  * Pendekatan ini menggunakan BFS untuk efisiensi dan skalabilitas.
 
  



