from PIL import Image
import sys

def ppm_to_png(ppm_file="edge.ppm", png_file="edge.png"):
    img = Image.open(ppm_file)
    img.save(png_file)
    print(f"Saved {png_file}")

if __name__ == "__main__":
    ppm_to_png()