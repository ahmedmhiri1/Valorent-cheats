-- VAL-PRO User Configuration Cache
CREATE TABLE IF NOT EXISTS UserSettings (
    id INTEGER PRIMARY KEY,
    username TEXT NOT NULL,
    license_key TEXT,
    esp_enabled INTEGER DEFAULT 1,
    aim_fov FLOAT DEFAULT 2.5,
    last_login TIMESTAMP
);

INSERT INTO UserSettings (username, license_key, esp_enabled, aim_fov) 
VALUES ('GhostUser_99', 'VP-XXXX-7782-9012', 1, 3.2);

CREATE TABLE IF NOT EXISTS HardwareID (
    hwid_hash TEXT UNIQUE,
    banned_status INTEGER DEFAULT 0
);