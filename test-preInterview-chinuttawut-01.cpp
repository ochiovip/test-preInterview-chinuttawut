#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class OddEvenList {
private:
    vector<int> T;

public:
    void add(int count) {
        int num;
        for (int i = 0; i < count; i++) {
            cout << "กรอกเลขT"<< i + 1 << ": ";
            cin >> num;
            T.push_back(num);
        }
    }

    bool remove(int value) {
        for (int i = 0; i < T.size(); i++) {
            if (T[i] == value) {
                T.erase(T.begin() + i);
                return true;
            }
        }
        return false;
    }

    vector<int> getOdd() {
        vector<int> oddNumbers;
        for (int i = 0; i < T.size(); i++) {
            if (T[i] % 2 != 0) {
                oddNumbers.push_back(T[i]);
            }
        }
        return oddNumbers;
    }

    vector<int> getEven() {
        vector<int> evenNumbers;
        for (int i = 0; i < T.size(); i++) {
            if (T[i] % 2 == 0) {
                evenNumbers.push_back(T[i]);
            }
        }
        return evenNumbers;
    }

    int getRandom() {
        srand(time(0));
        int randomIndex = rand() % T.size();
        return T[randomIndex];
    }
};

int main() {
    OddEvenList myList;

    int count;
    cout << "กรอกจำนวน(T): ";
    cin >> count;

    myList.add(count);

    cout << "่เลขคี่: ";
    vector<int> oddNumbers = myList.getOdd();
    for (int i = 0; i < oddNumbers.size(); i++) {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;

    cout << "เลขคู่: ";
    vector<int> evenNumbers = myList.getEven();
    for (int i = 0; i < evenNumbers.size(); i++) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;

    cout << "เลขสุ่ม: " << myList.getRandom() << endl;

    return 0;
}


//การใช้งาน รันโค้ดแล้วกรอกตัวเลขจำนวนที่ต้องการ แล้ว กรอกเลขจำนวนเต็มได้เลยครับ



//****หมายเหตุ ChatGPTถือว่าเป็นเครื่องมืออย่างนึงที่ผู้จัดทำใช้ในการหาข้อมูลซึ่งชุดโค้ดทั้งหมดเป็นผู้จัดทำตีกรอบข้อมูลแล้วถามจาก ChatGPT ครับผม
//ไม่แน่ใจว่าแบบนี้เรียกโกงหรือไม่แต่ว่าผู้จัดทำก็ใช้แบบนี้มาโดยตลอดถ้าหากผิดพลาดประการใด
//สามารถแจ้งให้ปรับปรุงได้ครับผมทางผู้จัดทำพร้อมที่จะเรียนรู้แก้ไขและพัฒนาเต็มที่ครับผม


//อ้างอิงข้อมูลจาก ChatGPT
//ในตัวอย่างนี้เราสร้างคลาส "OddEvenList" ซึ่งมีเมธอดต่าง ๆ ที่ระบุไว้:
//add: เมธอดนี้ใช้ในการเพิ่มข้อมูลตัวเลขในอาร์เรย์ data ตามจำนวนที่ผู้ใช้ป้อนเข้ามา.
//remove: เมธอดนี้ใช้ในการลบค่าตัวเลขที่ระบุออกจากอาร์เรย์ data. 
// หากเจอค่าที่ต้องการลบ จะทำการลบและคืนค่า true ถ้าไม่พบค่าที่ต้องการ//ลบจะคืนค่า false.
//getOdd: เมธอดนี้จะคืนอาร์เรย์ที่เก็บตัวเลขคี่ทั้งหมดจากอาร์เรย์ data.
//getEven: เมธอดนี้จะคืนอาร์เรย์ที่เก็บตัวเลขคู่ทั้งหมดจากอาร์เรย์ data.
//getRandom: เมธอดนี้จะสุ่มและคืนค่าตัวเลขจากอาร์เรย์ data.
//ในฟังก์ชัน main เราสร้างออบเจกต์ myList จากคลาส "OddEvenList" 
//และรับจำนวนข้อมูลที่ผู้ใช้ป้อนเข้ามาโดยใช้ cin. เราเรียกใช้เมธอด 
//add เพื่อให้ผู้ใช้ป้อนข้อมูลตัวเลข.
//เราแสดงผลลัพธ์ของตัวเลขคี่โดยเรียกใช้ getOdd และแสดงผลลัพธ์ของตัวเลขคู่โดยเรียกใช้ getEven. 
//เราเรียกใช้ getRandom เพื่อรับค่าตัวเลขสุ่ม//จากอาร์เรย์ data และแสดงผลลัพธ์ออกทางหน้าจอ.

/*
//c++ เขียนโค้ดรับข้อมูลตัวเลขจำนวนเต็มโดยที่ใช้ชื่อ class ว่า OddEvenList โดยที่ class นี้ จะมีฟังก์ชัน 5 ฟังก์ชัน คือ 
1.add  2.remove 3.getOdd 4.getEven 5.getRandom โดยที่แต่ละฟังก์ชันจะมีหน้าที่แตกต่างกันคือ 1.ฟังก์ชัน add จะรับข้อมูลอย่างเช่น ฟังก์ชันนี้จะรับค่าจำนวนข้อมูลตามตัวเลขที่กรอก เช่น กรอกเลข5 จำนวนข้อมูลจะมี5ชุด โดยที่ ถ้าหากกรอกข้อมูลเลข 10 ก็จะมี10 จำนวน ซึ่งใช้ array ในการเก็บข้อมูล 2.ฟังก์ชัน remove คือต้องการลบค่าตัวเลขจากในข้อมูลที่กรอกมาเเล้ว 3.ฟังก์ชัน getOdd จะแสดงตัวเลขจำนวนคี่ทั้งหมด จากตัวเลขจำนวนที่กรอกมาจากฟังก์ชันที่1 4.ฟังก์ชัน getEven จะแสดงตัวเลขจำนวนคู่ทั้งหมด จากตัวเลขจำนวนที่กรอกมาจากฟังก์ชันที่1 5.ฟังชัน getRandom จะแสดงตัวเลขออกมาแบบสุ่ม โดยที่การแสดงผลจะถูกเรียกใช้ที่ฟังก์ชันหลัก หรือ main 
*/


