# BigIntLite

A simple custom class in C++ to simulate big integer arithmetic using character arrays. This project demonstrates how to work with large numbers using low-level string manipulation techniques.

---

## 📚 Description

`BigIntLite` is a lightweight big integer class designed to model basic arithmetic operations (`+`, `-`, `*`, `/`) on numbers that might exceed the range of built-in data types. While this version still uses `int` internally for computations, it sets the groundwork for developing a full-featured arbitrary-precision library.

---

## ✨ Features

- ✅ Construct from both `int` and `char*`
- ✅ Manually store numbers in character arrays
- ✅ Supports:
  - `add(BigInteger&)`
  - `subtract(BigInteger&)`
  - `multiply(BigInteger&)`
  - `divide(BigInteger&)`
- ✅ Dynamic memory management
- ✅ Display sign and number separately

---

## 🚧 Limitations

- ❌ Internally uses `atoi()`, so it can't truly support *very* large integers yet
- ❌ No operator overloading (`+`, `-`, etc.)
- ❌ Negative string inputs aren't fully parsed

---

## 🛠️ How to Compile

```bash
g++ BigInteger.cpp -o BigIntLite
./BigIntLite
