def muat_buku():
    buku = {}
    with open("buku.txt", "a+") as file:
        file.seek(0)
        for line in file:
            data_buku = line.strip().split(",")
            judul, penulis, penerbit, tahun = data_buku
            buku[judul] = {"Penulis": penulis, "Penerbit": penerbit, "Tahun": tahun}
    return buku

def simpan_buku(buku):
    with open("buku.txt", "w") as file:
        for judul, info in buku.items():
            penulis = info["Penulis"]
            penerbit = info["Penerbit"]
            tahun = info["Tahun"]
            file.write(f"{judul},{penulis},{penerbit},{tahun}\n")

def tambah_buku(buku):
    judul = input("Masukkan judul buku: ")
    penulis = input("Masukkan nama penulis: ")
    penerbit = input("Masukkan nama penerbit: ")
    tahun = input("Masukkan tahun terbit: ")
    buku[judul] = {"Penulis": penulis, "Penerbit": penerbit, "Tahun": tahun}
    print("Buku berhasil ditambahkan!")

def hapus_buku(buku):
    judul = input("Masukkan judul buku yang ingin dihapus: ")
    if judul in buku:
        del buku[judul]
        print("Buku berhasil dihapus!")
    else:
        print("Buku tidak ditemukan!")

def tampilkan_buku(buku):
    if not buku:
        print("Tidak ada buku yang tersedia.")
    else:
        print("Daftar buku:")
        for index, (judul, info) in enumerate(buku.items(), 1):
            print(f"{index}. Judul: {judul}")
            print(f"   Penulis: {info['Penulis']}")
            print(f"   Penerbit: {info['Penerbit']}")
            print(f"   Tahun: {info['Tahun']}")
            print()

def menu_utama():
    buku = muat_buku()
    while True:
        print("\n--- Sistem Manajemen Buku ---")
        print("1. Tambah buku")
        print("2. Hapus buku")
        print("3. Tampilkan semua buku")
        print("4. Keluar")

        pilihan = input("Masukkan pilihan Anda: ")

        if pilihan == "1":
            tambah_buku(buku)
            simpan_buku(buku)
        elif pilihan == "2":
            hapus_buku(buku)
            simpan_buku(buku)
        elif pilihan == "3":
            tampilkan_buku(buku)
        elif pilihan == "4":
            print("Keluar dari program...")
            break
        else:
            print("Pilihan tidak valid. Silakan coba lagi.")

if __name__ == "__main__":
    menu_utama()
