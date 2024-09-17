# NCKH
<h1>Traffic Sign Detection</h1>
<p>Training on Google Colab and use YOLOv8 to detect traffic sign. Fine-tuning and evalute model to accurancy above 80%</p>
<p>In future, improve accurancy and integrate into Arduino (automatic car)</p>
<h3>Datasets</h3>
<p>The total number of images in this dataset, which includes 7 classes, is approximately 29,632 images, evenly distributed across each class. </p>
<img src ="![image](https://github.com/user-attachments/assets/506a684f-8de5-484f-a227-4c622f72c70e)" />
<h3>YOLOv8 Object Detection </h3>
<h4> 1.	Residual Blocks: </h4>
<p>To detect and recognize traffic signs easily, the YOLO algorithm divides the input image into an NxN grid with equal-sized cells, where N in our case is 4 as shown in the image on the right. Each cell in the grid represents localizing and predicting the class of the object lying within the cell along with the probability of each predicted object.</p>
<img src ="![image](https://github.com/user-attachments/assets/7c57c8b4-0a3b-473b-a41c-ad4dad8e1a15)" />
<h4>2.	Bounding Box Regression </h4>
<p>The subsequent stage involves identifying bounding boxes that outline all objects within the image. The number of bounding boxes can match the number of objects present in the image.
YOLO employs a single regression module to determine the attributes of these bounding boxes, represented by Y in the following format Y = [pc, bx, by, bh, bw, c1, c2]
This process is particularly crucial during the model's training phase.</p>
<p></p>The element pc denotes the probability score of the grid containing an object. For example, all grids highlighted in red will possess a probability score greater than zero (significant). The image on the right is a simplified version, as the probability of each yellow cell is zero (insignificant).
</p>
<img src ="![image](https://github.com/user-attachments/assets/f11f02da-fb33-4887-9e5a-a23fc823e836)" >
<h3> Training Results</h3>
<img src ="![image](https://github.com/user-attachments/assets/9dda54ff-0033-4ecc-a887-a0a9ad85698f)" >
<h3>Demo model</h3>
<img src = "https://github.com/thanhnguyenhoang171/NCKH_regTrafficSign/blob/main/Model%20Ho%C3%A0n%20Ch%E1%BB%89nh/runs/detect/predict2/test_anh.png" />
<img src = "![image](https://github.com/user-attachments/assets/48a2e070-2dc8-42e3-b466-b40b057fc8c1)" >
<h3>Conclusion</h3>
<p>Our research applied the YOLO algorithm for automatic traffic sign detection and recognition, with YOLOv8 significantly enhancing both speed and accuracy over manual methods. This advancement contributes to improved traffic safety and supports the development of automation in transportation. We believe our work will help enhance road safety and promote further growth in transportation automation.</p>
<h3> Developments</h3>
<p>A future direction for this research is to optimize the YOLOv8 model by tuning hyperparameters, expanding training data, and exploring new techniques to enhance accuracy and speed. Beyond traffic sign recognition, applying the model to detect pedestrians, vehicles, and street scenery could improve surveillance and security systems.

Integrating YOLOv8 with methods like CNNs, RNNs, or Reinforcement Learning may further boost performance. Testing the model in real-world systems, such as autonomous vehicles and surveillance cameras, will ensure its stability. These advancements could significantly contribute to traffic safety and the growth of automation in transportation.</p>
