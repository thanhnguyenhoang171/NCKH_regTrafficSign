from ultralytics import YOLO
model = YOLO("best.pt")


results = model.predict(source=1, show=True, stream=True, conf=0.7)
for r in results:
    for box in r.boxes:
        class_id = int(box.cls.item())
        print(class_id)
       
