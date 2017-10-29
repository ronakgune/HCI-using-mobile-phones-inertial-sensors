protected float[] lowPass( float[] input, float[] output ) 
    
{
    
    if ( output == null ) return input;
    
    for ( int i=0; i<input.length; i++ ) 
    {
    
        output[i] = output[i] + 0.9f * (input[i] - output[i]);
        
    }
    
    return output;
    
}
