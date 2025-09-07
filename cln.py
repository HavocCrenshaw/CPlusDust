# ChatGPT generated code lol can't be assed idk python
import os

def clean_exe_obj(directory="."):
    for root, dirs, files in os.walk(directory):
        for filename in files:
            if filename.lower().endswith((".exe", ".obj")):
                file_path = os.path.join(root, filename)
                try:
                    os.remove(file_path)
                    print(f"Deleted: {file_path}")
                except Exception as e:
                    print(f"Failed to delete {file_path}: {e}")

if __name__ == "__main__":
    clean_exe_obj(".")
