Humanoid Robot Detection Using Deep Learning: A Speed-Accuracy Trade-off
===================

This repository contains:
 * Robot Body Data-Set
 * ImageCropper for Creating Simmilar Data-Set
 * Python Scripts for Training Deep Networks Using Caffe

"Humanoid Robot Detection using Deep Learning: A Speed-Accuracy Trade-off"
[Mohammad Javadi](https://github.com/mohammadjv6), [Sina Mokhtarzadeh](https://github.com/sinaazar), [Sajad Azami](sajjadaaza), Saeed Shiry Ghidary, Soroush Sadeghnejad, and Jacky Baltes

Submitted to [RoboCup 2017 Symposium, Nagoya, Japan](https://www.robocup2017.org/eng/symposium.html)

Abstract
----------
Recent advances in computer vision have made the detection
of landmarks on the soccer field easier for teams. However, the detec-
tion of other robots is also a critical capability that has not garnered
much attention in the RoboCup community so far. This problem is well
represented in different RoboCup Soccer and Rescue Robot Leagues.
In this paper, we compare several two-stage detection systems based
on various Convolutional Neural Networks (CNN) and highlight their
speed-accuracy trade off. The approach performs edge based image seg-
mentation in order to reduce the search space and then a CNN validates
the detection in the second stage. We use images of different humanoid
robots to train and test three different CNN architectures. A part of
these images were gathered by our team and will be publicly available.
Our experiments demonstrate the strong adaptability of deeper CNNs.
These models, trained on a limited set of robots, are able to successfully
distinguish an unseen kind of humanoid robot from non-robot regions.

----------
How to Use This Code in Your Project?
----------
blah


Using Our Data-Set, Adding Your Own
----------

We have published 1500 images from 3 platforms: AKBAR, KIARASH and DARWIN, 500 of each. You can download these images using link below:

[AUT_HUMANOID_BODY](http://ceit.aut.ac.ir/~azami/robot_body_dataset/AUT_HUMANOID_BODY.zip)

As mentioned in the paper, The problem of recognizing other robot bodies is a critical capability that has not garnered much attention in the Robotics community so far. Since there is no centeralized data set for Robot Bodies, we encourage you to add your Robot Body Image data-set link to this repository(just add your link to list below and create a pull request).

Further Robot Body Datasets:

* [SPQR Team NAO image dataset](http://www.dis.uniroma1.it/~labrococo/?q=node/459)

Training Your Model
----------

blah

Using ImageCropper
----------

blah


Reference to This Paper
----------
- Bibtex Here

Lisence
----------
Apache License, Version 2.0 (the "License");

