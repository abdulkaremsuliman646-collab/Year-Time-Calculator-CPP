# ⏳ Year Time Calculator (C++)

A modular and clean C++ tool that calculates the total days, hours, minutes, and seconds for any given Gregorian calendar year by evaluating leap year conditions.

---

## 🚀 Key Architectural Highlights

* **Functional Chaining & Reusability:** Every calculation builds strictly on top of the preceding unit (Seconds $\rightarrow$ Minutes $\rightarrow$ Hours $\rightarrow$ Days), avoiding duplicate arithmetic operations.
* **Leap Year Logic:** Accurately determines 365 vs 366 days based on Gregorian calendar rules (handling the 4, 100, and 400-year edge cases).
* **Single Responsibility Principle:** Isolates data reading, logic checks, time unit conversions, and output rendering into dedicated functions.

---

## 🛠️ Concepts Applied

* **Language:** C++
* **Logic:** Conditional operators (`? :`), modular arithmetic (`%`), and function composition
* **Software Design:** Clean code principles, maintainability, and code readability

---

## 👨‍💻 Author
**Abdulkarem Suliman**
* Software Engineering Student & C++ Enthusiast
