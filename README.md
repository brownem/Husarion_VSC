# Husarion_VSC
A 'blank' flash for a Husarion Core2-ROS attached to an Asus Tinker board. As of November 13th, 2017, the Husarion team is troubleshooting an issue with the Core2-ROS boards when paired with an Asus Tinker board. During boot-up, after initial pairing of the Core2 with the Husarion Cloud service, the Core2 boots significantly faster than the Asus Tinker, and this gets the Asus Tinker 'locked' into it's bootloop.

See the website section of this Git for a permalink to the appropriate thread on the community.husarion forums.

### Adding a delay to the intialization of the Asus Tinker is a quick and dirty way of solving [avoiding] this problem.

You can verify functionality of this flash by looking for a solid blue light on LR2 and a 1Hz cycle on L1.

11/13/2017 - presently a WIP and does not properly work. Do not anticipate much trouble getting it to work, it's just late here. I'll tackle it again tomorrow based on feedback from the Husarion team

11/14/2017 - Fully functional, thanks to Hubert over at Husarion.

### Disclaimer
This code is entirely his and Husarion's and is subject to whatever license(s) they deem necessary or appropriate. I am only providing this Git as a simple way to obtain your own fully functional 'blank flash' for any Core2-ROS boards that are using an Asus Tinker board. This entire Git does not come with any kind of warranty, including but not limited to: downloading, building, compiling, flashing, and use. Use at your own risk; I'm not replacing any damaged hardware, and I doubt Husarion will. 