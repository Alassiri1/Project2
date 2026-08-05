# Robot Dog Voice & Touch Control Panel 

An interactive control interface developed for the robot dog, supporting both touch-based navigation and voice recognition (Speech-to-Text). It connects to a cloud-based MySQL database to update control commands in real-time, allowing an ESP32 microcontroller to retrieve and execute movement direction instructions.

---

##  Features

* **Modern UI:** Clean dark-mode dashboard styled with glassmorphism and active directional indicators.


* **Touch Control Pad:** Directional controls for core movements (`forward`, `backward`, `left`, `right`, `stop`).


* **Speech Recognition:** Converts spoken voice commands into text dynamically using the native `Web Speech API`.


* **Cloud Integration:** Sends commands via `POST` requests to `update_command.php`, converting action phrases into single-character identifiers (`f`, `b`, `l`, `r`, `S`) saved in an InfinityFree MySQL database.



---

##  Tech Stack

* **Frontend:** HTML5, CSS3, JavaScript (Fetch API, Web Speech API).


* **Backend:** PHP.


* **Database:** MySQL (InfinityFree Hosting).


* **Hardware Target:** ESP32 Microcontroller (Robot Dog).



---

##  Project Structure

```text
├── index.html          # Main Web Interface (Touch Pad & Voice Recognition)
├── update_command.php  # Handles incoming POST requests and updates robot command status
├── get_state.php       # API endpoint for the ESP32 to query current state
├── db.php              # Database connection setup
└── setup.sql           # SQL script for initializing the robot_state table

```

---

##  System Workflow

1. **User Action:** The user triggers a movement command by tapping a directional button or uttering a voice command (e.g., "left").


2. **Data Transmission:** The web app sends the full command string via a `POST` request to the PHP backend.


3. **Database Update:** The backend maps the command to its designated single-character code and updates row `id = 1` in the `robot_state` table.


4. **Robot Execution:** The onboard **ESP32** module queries `get_state.php` over Wi-Fi, retrieves the character code, and drives the servos accordingly.
