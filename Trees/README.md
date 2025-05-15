- Nama: Ahmad Nur Alim
- NIM: D121241023
- Level Difficulty: Easy
- Problem Link: https://www.hackerrank.com/challenges/tree-postorder-traversal/problem
- Short Approach Summary: 
1. Buat fungsi rekursif postOrder(root).
2. Jika root kosong, hentikan (return).
3. Kunjungi subtree kiri (postOrder(root->left)).
4. Kunjungi subtree kanan (postOrder(root->right)).
5. Cetak nilai node saat ini (root->data).
6. Fungsi akan mencetak node dalam urutan postorder: kiri → kanan → akar.
