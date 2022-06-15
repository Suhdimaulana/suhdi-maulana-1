print ("NAMA\t: SUHDI MAULANA")
print ("KLS\t: TI D")
print ("NPM\t: 2021020100096")
print ("Umur\: 19")
print ("tetala\:Pamekasan 11-09-2003")

print ('menjual sebuah leptop')

class Toshiba():

    def __init__(self, nama, ram, windows):
        self.nama = nama
        self.ram = ram
        self.windows = windows
    def leptop (self):
        print ("nama l\t:",self.nama)
        print ("ram\t:",self.ram)
        print ("windows\t:",self.windows)
        
        
leptop = Toshiba("toshiba","8gb","10")

leptop.leptop()

nama = input ("leptop apa yang ingin di cari.....?")

if nama == "Toshiba"():
    print ("harganya 3.000.000 wah murah banget\n")
elif nama == "asus":
    print ("lagi tidak ada boss")
elif nama == "hp" :
    print ("harganya 2.000.000 sudah pas harganya\n")
elif nama == "lenovo":
    print ("harganya terjangkau bos")
elif nama == "Aser":
    print ("harganya lumayan mahal bos 3.000.000")
elif nama == "Hp14z":
    print ("harganya terjangkau maszehhhh")
    





print ("terimakasih sudah mampir")