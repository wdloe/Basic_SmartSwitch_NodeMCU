# TUGAS DOKUMENTASI RECRUITMENT CREW BENGKEL RADIO
Dibuat oleh William Damario (18117018)
Project yang saya ambil adalah "Smart Sekre Remote Electricity Switch"

# LATAR BELAKANG
Belakangan ini kita seringkali lupa mematikan listrik pada sekre saat hendak meninggalkan sekre. Hal tersebut tentu saja menyebabkan tarif listrik yang seharusnya bisa hemat menjadi lebih mahal. Selain menyebabkan tarif listrik yang meningkat, pemborosan listrik juga terjadi pada kasus ini. Tidak hanya lampu saja yang menjadi perhatian dalam kasus ini, akan tetapi bisa jadi perangkat-perangkat elektronik lainnya. Salah satu latar belakang kami dalam membuat alat ini adalah solusi atas kemageran orang yang berada di dalam sekre untuk mematikan/menyalakan lampu, mencabut steker dari stopkontak, dan masalah-masalah kemageran yang berkaitan dengan listrik AC (bolak-balik).
Oleh karena itu, kami tertarik untuk membuat suatu solusi terkait dengan masalah kemageran ini. Yaitu dengan membuat suatu remote yang dikontrol melalui *smartphone* Android dengan basis komunikasi Wi-Fi. *Smartphone* berkomunikasi dengan mikrokontroller yang telah dihubungkan dengan *Relay*, sehingga seolah-olah kita memberikan input kepada *Relay* melalui *Smartphone*. Aplikasi yang akan kita gunakan pada Smartphone adalah BLYNK.

# APA ITU RELAY?
*Relay* adalah suatu perangkat yang memungkinkan suatu mikrokontroller dalam mengendalikan arus listrik AC. Relay yang dijual di pasaran biasanya merupakan *Active LOW*. Artinya, *relay* menghubungkan arus listrik saat relay kita beri tegangan *LOW* dari mikrokontroller.
(Catatan : Arus listrik yang digunakan pada mikrokontroller adalah DC, sedangkan pada project ini kita akan mengatur listrik AC. Jadi bukan listrik AC yang terhubung pada mikrokontroller, melainkan listrik AC terhubung dengan *Relay* yang dikendalikan oleh mikrokontroller.)


# PENJELASAN MENGENAI ALAT YANG AKAN DIBUAT
## Alat dan Bahan yang akan digunakan
### Terkait dengan Hardware :
1. NodeMCU,
2. Relay
3. Kabel jumper (*male to female*),
4. Kabel listrik AC,
5. Lampu bohlam, dan
6. Steker dan fitting lampu 
(Catatan : poin 4, 5, dan 6 adalah untuk demo *prototype* alat.)
### Terkait dengan Software :
1. Laptop untuk mengerjakan *coding*-an, dan
2. *Smartphone* Android, yang dilengkapi dengan aplikasi BLYNK.

## Cara Kerja Alat
1. User memberikan input pada *Smartphone*
2. Inputan dari *smartphone* dikirimkan ke NodeMCU melalui Bluetooth
3. Arduino memberikan sinyal ke *Relay*
4. Jika sinyal LOW maka listrik terhubung, jika sinyal *HIGH* maka listrik terputus.

# PROGRESS
Prototip alat sudah jadi, akan tetapi spek sedikit berbeda dari pengumpulan pertama. Pada pengumpulan pertama disebutkan bahwa alat inin menggunakan komunikasi bluetooth dan menggunakan mikrokontroller Arduino. Pada versi yang sekarang ini, kita menggunakan NodeMCU yang sudah terintegrasi dengan ESP8266, sehingga kita akan menggunakan komunikasi dengan Wi-Fi. Untuk aplikasi pengontrol pada smartphone, kita akan menggunakan Blynk.

## Metodologi
### Alat
Adapun hardware disusun sangat sederhana. Yaitu menghubungkan semua pin pada Relay ke pin yang tersedia di NodeMCU.
![alt text](https://raw.githubusercontent.com/wdloe/smartswitch1/master/Switch%20Documentation/DiagramAlat.jpg "Diagram Alat")
Keterangan : gambar di atas bukanlah properti pribadi saya, saya mendapatkan dari internet. Sehingga perbedaannya terdapat pada pin ON yang terhubung ke D4, sedangkan dalam project ini saya menghubungkannya ke D5.

### Software
Software yang dibuat ada di Arduino IDE, dan di Aplikasi Blynk. Untuk file source code akan dilampirkan di luar file markdown ini. Pada intinya adalah mengautentifikasi hubungkan antara mikrokontroller dengan smartphone, kemudian menghubungkan dengan Wi-Fi, dan masuk pada loop.

Untuk konfigurasi pada Blynk sendiri, dapat dilihat pada gambar berikut.
![alt text](https://raw.githubusercontent.com/wdloe/smartswitch1/master/Switch%20Documentation/1BlnykConfig.PNG "Konfigurasi Blynk")

## PERCOBAAN
1. Pertama-tama kita harus menghubungkan mikrokontroller dengan charger handphone, karena NodeMCU membutuhkan daya eksternal. Diberikan sebuah port microUSB.
2. Setelah dihubungkan, NodeMCU akan menyala.
3. Setelah menyala, maka indikator pada Blynk akan mengatakan bahwa device sudah online. Berikut adalah tampilannya.
![alt text](https://raw.githubusercontent.com/wdloe/smartswitch1/master/Switch%20Documentation/2MatiCond.PNG "Kondisi Awal")
Dapat dilihat bahwa kondisi masih dalam OFF, sehingga lampu indikator pada Relay yang menyala hanyalah yang merah. Artinya, listrik yang mengalir terputus.
4. Kemudian, dirubah menjadi ON. 
![alt text](https://raw.githubusercontent.com/wdloe/smartswitch1/master/Switch%20Documentation/3NyalaCond.PNG "Diagram Alat")
Lampu indikator berwarna hijau menyala, artinya listrik yang melewati relay tersambung.
5. Setelah kita berhasil mematikan dan menyalakan switch, sekarang kita tambahkan fitur baru yaitu timer. Timer dapat mengatasi masalah lupa dalam mematikan listrik di Rumah, ataupun menyalakan lampu di malam hari saat bepergian ke luar kota. 
![alt text](https://raw.githubusercontent.com/wdloe/smartswitch1/master/Switch%20Documentation/4DemoTimer.PNG "Diagram Alat")

## Pembahasan
1. Kami baru sempat menggunakan relay 1 channel, sehingga tidak menggunakan relay 4 channel sesuai dengan yang direncanakan. Akan tetapi konsepnya sama, hanya saja menambahkan Button pada aplikasi Blynk.
2. Sebenarnya bisa langsung menggunakan jumer female-to-female, tapi karena keterbatasan waktu akhirnya kami mengakali dengan menggunakan breadboard dan kabel jumper male-to-female (karena sudah punya).
3. Pada percobaan tidak menggunakan listrik AC, karena dari indikator lampu hijau kita sudah tahu apakah relay menyambungkan/memutus listrik.

#Lampiran
1. Gambar-gambar
2. Source Code



TERIMA KASIH ATAS PERHATIANNYA. MOHON MAAF APABILA DIKSI JELEK, DAN PENJELASAN KURANG JELAS :)) MAU ADA UJIAN LAGI SOALNYA. TERIMA KASIH SEKALI LAGI :)))