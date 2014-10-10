package com.example.simpleaudio;

import java.nio.Buffer;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
//import android.support.v7.app.ActionBarActivity;


public class MainActivity extends Activity {

	private boolean isSendering;
	private static int BUFFER_FRAME_SIZE = 16000;
//	Buffer buf = new CircularFifoBuffer(4);
	short[] lin = new short [BUFFER_FRAME_SIZE];
	short[][] inbuffer  = new short[5][BUFFER_FRAME_SIZE];
	short[] outbuffer = new short[2];
	
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
             
        createEngine();
        createAudioRecorder();
		createBufferQueueAudioPlayer();
        
        ((Button) findViewById(R.id.start)).setOnClickListener(new OnClickListener() {
            public void onClick(View view) {
            	
            	isSendering = true;
            	Log.d("start", "start button");
            	
            	Thread t = new Thread() {
            		@Override
            		 public void run() {           			
            			
//            			lin = startRecording();
    	    			
//            			for (int i = 0; i < 3; i++) {
//            				inbuffer[i] = startRecording();
//            				try {
//    							Thread.sleep(1000);
//    						} catch (InterruptedException e) {
//    							// TODO Auto-generated catch block
//    							e.printStackTrace();
//    						}
//            			}
//        	    		
//        	    		try {
//							Thread.sleep(10000);
//						} catch (InterruptedException e) {
//							// TODO Auto-generated catch block
//							e.printStackTrace();
//						}
        	    		
//            	    	while (isSendering) {
            	    		Log.d("start", "record begin");	
            	    		
//            	    		lin = startRecording();
//            	    		
            	    		
            	    		
//            	    		playBack(lin, BUFFER_FRAME_SIZE);
            	    		
            	    		
//            	    		for (int i = 0; i < 5; i++) {
            	    			setBuffer(startRecording(), 1);
	            	    		
            	    			lin = startRecording();
            	    			try {
        							Thread.sleep(2000);
        						} catch (InterruptedException e) {
        							// TODO Auto-generated catch block
        							e.printStackTrace();
        						}
//            	    			setBuffer(lin, 2);\
            	    			playBack(lin, BUFFER_FRAME_SIZE);
            	    			Log.d("start", "got data, ready to play");
//	            	    		lin = inbuffer[i];
//	            	    		try {
//	    							Thread.sleep(1000);
//	    						} catch (InterruptedException e) {
//	    							// TODO Auto-generated catch block
//	    							e.printStackTrace();
//	    						}
	            	    		

//            	    		}

            	    		
//            	    		for (int i = 0, j = 0; i < 64; i++, j+=2) {
//            	    			outbuffer[j] = outbuffer[j+1] = inbuffer[i];
//            	    		}

//            	    		for (int i = 0; i < 100; i++) {
//            	    			lin[i] = startRecording();
            	    			
//            	    		}
            	    		
//            			}
            	    }
            	};
            	t.start();                 	
            }
        });
        
        
        ((Button) findViewById(R.id.stop)).setOnClickListener(new OnClickListener() {
            public void onClick(View view) {
            	
            	Log.d("stop", "stop button");
            	Log.d("stop", "stop button finished");
            	isSendering = false;
            	

				Log.d("start", "played");
            }
        });
        
       
    }

   
 
    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();
        if (id == R.id.action_settings) {
            return true;
        }
        return super.onOptionsItemSelected(item);
    }
    
    static {  
        System.loadLibrary("my_lib");  
    }  
    public static native void createEngine();
    public static native void createBufferQueueAudioPlayer();
    public static native void playBack(short[] lin, int decodeSize);
    public static native boolean createAudioRecorder();
    public static native void setBuffer(short[] lin, int decodeSize);
    public static native short[] startRecording();
   
}
