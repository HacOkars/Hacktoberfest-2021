import cv2
from PIL import Image

faceDetector = cv2.CascadeClassifier("haarcascade_frontalface_default.xml")
inputLocation = input("Enter file name: ")
image = cv2.imread(inputLocation)
image2 = Image.open(inputLocation)
i = cv2.cvtColor(image, cv2.COLOR_RGB2GRAY)
faces = faceDetector.detectMultiScale(i, scaleFactor=1.25)

for face in faces:
    x, y, w, h = face
    cut = image2.crop((x - 25, y - 50, x + w + 25, y + h + 25))
    cut.show()
    i = input("Enter name to save: ")
    try:
        cut.save(i)
    except:
        continue
