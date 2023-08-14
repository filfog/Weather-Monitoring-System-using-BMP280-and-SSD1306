# Weather-Monitoring-System-using-BMP280-and-SSD1306
Weather Monitoring System using BMP280 and SSD1306
This repository contains the code for a weather monitoring system that utilizes the Adafruit BMP280 sensor to measure temperature, pressure, and altitude. The collected data is displayed on an SSD1306 OLED display. The system provides real-time weather information and is designed to be a simple demonstration of using these components together.

Components Used
Adafruit BMP280 Sensor (GY-280)
SSD1306 OLED Display
Arduino (or compatible microcontroller)
Features
Measures temperature, pressure, and altitude using the BMP280 sensor.
Displays data on the SSD1306 OLED display.
Periodically updates the display with new weather data.
The pressure readings are also converted and displayed in mmHg (millimeters of mercury).
Wiring
BMP280 Sensor:
SDA -> Arduino A4 (for I2C communication)
SCL -> Arduino A5 (for I2C communication)
SSD1306 Display:
CS -> Arduino Pin 7
DC -> Arduino Pin 9
RST -> Arduino Pin 8
CLK -> Arduino Pin 13
MOSI -> Arduino Pin 11
Usage
Connect the BMP280 sensor and SSD1306 display to your Arduino according to the provided wiring diagram.
Upload the provided code (weather_monitoring.ino) to your Arduino.
Open the Arduino Serial Monitor to view the data being read from the BMP280 sensor.
The data will also be displayed on the SSD1306 OLED display. The display will update every 30 seconds.
Note
The bme.readAltitude(1013.25) function call should be adjusted to your local atmospheric pressure for accurate altitude calculations.
Feel free to customize and improve the code for your specific needs!

And here's the translation in Ukrainian:

Система моніторингу погоди з використанням BMP280 та SSD1306
Цей репозиторій містить код для системи моніторингу погоди, яка використовує датчик Adafruit BMP280 для вимірювання температури, тиску та висоти. Зібрані дані відображаються на OLED-дисплеї SSD1306. Система надає інформацію про погоду в реальному часі і розроблена як проста демонстрація використання цих компонентів разом.

Використані компоненти
Датчик Adafruit BMP280 (GY-280)
OLED-дисплей SSD1306
Arduino (або сумісний мікроконтролер)
Особливості
Вимірює температуру, тиск та висоту за допомогою датчика BMP280.
Відображає дані на OLED-дисплеї SSD1306.
Періодично оновлює дисплей новими погодними даними.
Дані тиску також перетворюються та відображаються в мм ртутного стовпчика (міліметрах ртутного стовпчика).
Підключення
Датчик BMP280:
SDA -> Pin A4 Arduino (для I2C-зв'язку)
SCL -> Pin A5 Arduino (для I2C-зв'язку)
Дисплей SSD1306:
CS -> Pin 7 Arduino
DC -> Pin 9 Arduino
RST -> Pin 8 Arduino
CLK -> Pin 13 Arduino
MOSI -> Pin 11 Arduino
Використання
Підключіть датчик BMP280 та дисплей SSD1306 до Arduino згідно з наданим схемою підключення.
Завантажте наданий код (weather_monitoring.ino) на Arduino.
Відкрийте Arduino Serial Monitor, щоб переглянути дані, які зчитуються з датчика BMP280.
Дані також відображатимуться на OLED-дисплеї SSD1306. Дисплей оновлюватиметься кожні 30 секунд.
Примітка
Виклик функції bme.readAltitude(1013.25) слід налаштувати на місцевий атмосферний тиск для точних розрахунків висоти.
Запрошую налаштувати та вдосконалити код згідно зі своїми потребами!
