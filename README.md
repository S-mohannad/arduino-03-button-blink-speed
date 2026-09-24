# 🔘 Button-Controlled Blink Speed

> **Arduino Project #03** — زر يتحكم بسرعة وميض LED: سريع عند الضغط، بطيء عند الإفراج

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

LED على Pin 13 يومض بسرعتين مختلفتين بناءً على حالة الزر (Pin 8):
- **بدون ضغط** — وميض بطيء (2000ms)
- **عند الضغط** — وميض سريع (250ms)

يستخدم `INPUT_PULLUP` مما يعني الزر مقلوب منطقياً (1 = غير مضغوط، 0 = مضغوط).

---

## 🔌 Circuit

```
Arduino UNO
┌─────────────────┐
│            13 ●─┼──[220Ω]──💡 LED ── GND
│             8 ●─┼──────────🔘 زر ── GND
│           GND ●─┼──────────🔘 زر (الطرف الثاني)
└─────────────────┘
```

- 💡 LED على Pin 13 مع مقاومة 220Ω
- 🔘 زر على Pin 8 — لا يحتاج مقاومة خارجية (INPUT_PULLUP مدمجة)

---

## 💡 Concepts Used

- `INPUT_PULLUP` — مقاومة سحب داخلية بدون دائرة خارجية
- `digitalRead()` — قراءة حالة الزر
- `if / else` — اتخاذ القرار بناءً على الإدخال
- **متغير ديناميكي** — `D` يتغير حسب حالة الزر في كل دورة

---

## 📊 Behavior

| حالة الزر | قيمة digitalRead | التأخير | سرعة الوميض |
|-----------|-----------------|---------|-------------|
| غير مضغوط | 1 | 2000ms | بطيء 🐢 |
| مضغوط | 0 | 250ms | سريع ⚡ |

---

## 🔗 Code

```cpp
int LED = 13;
int sw  = 8;
int D1  = 2000;
int D2  = 250;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
}

void loop() {
  int D;
  if (digitalRead(sw) == 1) { D = D1; }
  else { D = D2; }

  digitalWrite(LED, 1);
  delay(D);
  digitalWrite(LED, 0);
  delay(D);
}
```
## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل الدائرة كما في الرسم
3. انسخ الكود والصقه
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. جرب الضغط على الزر وشاهد الفرق في سرعة الوميض

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
