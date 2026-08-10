# 🎆 Firework Animation in C++

> A C++ graphics program using the **BGI (Borland Graphics Interface)** library that displays random firework bursts at random positions on the screen.

---

## 📋 Overview

This program demonstrates **randomized animation and graphics primitives** using the BGI library. Fireworks burst at random positions on the screen with random colors, creating a celebratory visual effect.

**Key Concepts:**
- **Randomization:** `rand()` generates random positions, angles, lengths, and colors.
- **Trigonometry:** `cos()` and `sin()` calculate burst directions.
- **Animation Loop:** Continuously displays new fireworks.
- **Graphics Primitives:** `line`, `setcolor`, `cleardevice`.

---

## ✨ Features

- ✅ Random firework positions (x, y)
- ✅ Random burst angles (0 to 360 degrees)
- ✅ Random burst lengths (50 to 100 pixels)
- ✅ Random colors (1 to 15)
- ✅ Smooth animation with `delay()` control
- ✅ Press any key to exit the animation
- ✅ Clean and well-commented implementation
- ✅ Beginner-friendly with proper comments

---

## ⏱️ Complexity Analysis

| Measure | Value |
| :---: | :--- |
| **Time Complexity** | O(frames × rays) – 30 rays per firework. |
| **Space Complexity** | O(1) – No extra memory used. |

---

## 💻 Sample Output

- A black screen with colorful firework bursts.
- Each firework has 30 rays spreading in random directions.
- A new firework appears every 400ms at a random position.
- The animation continues until a key is pressed.

---

## 🧮 Program Logic & Execution Flow

### 1. **`firework(x, y)`**
- Generates 30 random rays:
  - `angle = rand() % 360` (direction of the ray).
  - `len = rand() % 50 + 50` (length of the ray).
  - Calculates the endpoint using trigonometry:
    - `ex = x + len * cos(angle * 3.14 / 180)`
    - `ey = y + len * sin(angle * 3.14 / 180)`
  - Draws a line from `(x, y)` to `(ex, ey)` with a random color.

### 2. **`main()`**
- Sets up the graphics window using `initgraph()`.
- Runs while no key is pressed (`!kbhit()`):
  - Generates random `x` and `y` positions.
  - Calls `firework(x, y)` to display a burst.
  - Adds a delay (`delay(400)`) to control the frame rate.
  - Clears the screen for the next firework.

### 3. **Exit**
- Closes the graphics window using `closegraph()`.

---

## 🛠️ How to Compile and Run (Windows Only)

### 🪟 For Windows Users (Using Turbo C++ / WinBGIm)

#### Option 1: Using Turbo C++ (Old School)
1. Open Turbo C++.
2. Create a new file and paste the code.
3. Go to **Options → Linker → Libraries** and enable the Graphics library.
4. Compile and run (Ctrl+F9).

#### Option 2: Using WinBGIm (Modern Windows)
1. Download WinBGIm from: http://winbgim.codecutter.org/
2. Install and set up the library in your compiler.
3. Compile with:
   ```bash
   g++ -std=c++11 firework.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
Run: firework.exe

📂 Project Structure

cpp-firework-animation/
│
├── firework.cpp   # Main source code file
└── README.md      # Project documentation (this file)
🔍 Real-World Applications
Educational Projects: Teaching graphics programming and randomization.

Game Development: Particle effects and explosions.

Event Simulations: Celebratory visual effects.

UI/UX Prototyping: Demonstrating animated effects.

🧠 Key Learnings
Randomization: Using rand() for variety in position, color, and shape.

Trigonometry: cos() and sin() for directional calculations.

Animation Loop: The game loop pattern (update → render → delay).

Graphics Primitives: line for burst rays.

Frame Control: delay() determines the animation speed.

🔧 Potential Enhancements
Multiple Fireworks: Display several fireworks simultaneously.

Gravity Effect: Simulate falling sparks after the burst.

Sound Effects: Add a boom sound using Beep() or audio libraries.

User Control: Allow the user to choose burst colors or speed.

Cross-Platform: Use SDL, SFML, or OpenGL for portability.

Particle Trails: Add fading trails for each ray.

⚠️ Important Notes
This program is Windows-only due to the BGI library dependency.

For Turbo C++ users: You may need to adjust the graphics driver and mode.

For modern compilers: WinBGIm is recommended.

The graphics functions may not work directly on Linux/macOS.

👩‍💻 Author
Iqra Maqsood Mughal
C++ Developer | Programming Enthusiast

📅 Date
August 6, 2026

📄 License
This project is open-source and intended for educational purposes.
