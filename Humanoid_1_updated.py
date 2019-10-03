
'''
	This is the code for servo motor motions using python and raspebrry pi 3B+
'''
if __name__=="__main__":
	import RPi.GPIOas GPIO
	import time
	
	GPIO.setmode(GPIO.BCM)
	
	GPIO.setup(13, GPIO.OUT)
	GPIO.setup(12, GPIO.OUT)
	
	GPIO.setup(11, GPIO.OUT)
	GPIO.setup(15, GPIO.OUT)
	GPIO.setup(16, GPIO.OUT)
	GPIO.setup(18, GPIO.OUT)
	
	p = GPIO.PWM(13, 50)
	q = GPIO.PWM(12, 50)
	#getting input if want to start the motors or not
	temp=int(input())
	if temp==1:
		p.start(7.5)
		q.start(7.5)
	
	
		try:
	    	while True:
	        	servo_a(1)
	        	forward(1)
	        	backward(1)
	        
		except KeyboardInterrupt:
	    	p.stop()
	    	q.stop()
	    	GPIO.cleanup()
	
		def servo_a(t):
		    p.ChangeDutyCycle(12.5)  # turn towards 90 degree
		    q.ChangeDutyCycle(2.5)
		    print ("Horizontal")
		    time.sleep(t) # sleep 1 second
		    p.ChangeDutyCycle(13)  # turn towards 0 degree
		    q.ChangeDutyCycle(2)
		    print ("Step 1")
		    time.sleep(t) # sleep 1 second
		    p.ChangeDutyCycle(14) # turn towards 180 degree
		    q.ChangeDutyCycle(1)
		    print ("Step 2")
		    time.sleep(t) # sleep 1 second
		    p.ChangeDutyCycle(15) # turn towards 180 degree
		    q.ChangeDutyCycle(0)
		    print ("Step 3")
		    time.sleep(t) # sleep 1 second
		    GPIO.cleanup()
		
		def forward(x):
		    GPIO.output(11,False)
		    GPIO.output(15,True)
		    GPIO.output(16,False)
		    GPIO.output(18,True)
		    time.sleep(x)
		    GPIO.cleanup()
		    print("Forward Motion")
		
		def backward(x):
		    GPIO.output(11,True)
		    GPIO.output(15,False)
		    GPIO.output(16,True)
		    GPIO.output(18,False)
		    time.sleep(x)
		    GPIO.cleanup()
		    print("Backward Motion")	
	else:
		print("you gave wrong input.try giving temp as 1")	