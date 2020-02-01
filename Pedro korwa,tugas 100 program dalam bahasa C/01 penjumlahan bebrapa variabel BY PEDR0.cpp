#include <stdio.h>
 
 main()
 {
 	
 	float gula,minyak,tepung,garam,airmineral;
 	int hasil;
 	  char nama[50];
                          printf("\t \t I========perhatikan program di bawah ini============I\n");
 	                      
 	                      printf("I=================>PROGRAM DI BAWAH INI DI BUAT OLEH => PEDRO KORWA <===========I\n");
 	                       
 	                       printf("masukan nama si pembuat program ini :");
 	                        gets(nama);
 	                        
 	                      
 	        //====program penjumlahan beberapa variabel di bawah ini========>              
 	printf("masukan harga gula :",gula);
 	 scanf("%f",&gula);
 	
 	 
 	              printf("masukan harga minyak :",minyak);
 	                scanf("%f",&minyak);
 	               
 	       printf("masukan harga tepung :",tepung);
 	         scanf("%f",&tepung);
 	           
 	                           printf("masukan harga garam :",garam);
 	                            scanf("%f",&garam);
 	                             
 	                       printf("masukan harga airmineral :",airmineral);
							 scanf("%f",&airmineral);
							
							  printf("\t \t==========JAWABAN==========\n");
							  
							  printf("NAMA SI PEMBUAT PROGRAM INI ADALAH => (%s)\n",nama);
					 printf("inilah harga gula yang di ketahui \t:%.2f  \n",gula);  
					   printf("inilah harga minyak yang di ketahui \t:%.2f  \n",minyak);
					    printf("inilah harga tepung yang di ketahui \t:%.2f \n",tepung);
					    printf("inilah harga garam yang di ketahui \t:%.2f  \n",garam);
					      printf("inilah harga airmineral yang di ketahui\t:%.2f \n",airmineral);
 	                             
 	     
 	   
							  
 hasil=gula+minyak+tepung+garam+airmineral;
        printf("inilah hasil dari semua jika di tambahkan=> %.2d",hasil);
  
 	
 }
