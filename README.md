# lscm-texture-mapping
Attempting to read in a colored vertex mesh from OBJ and output a proper textured image.  Test models are captured with Intel D435 using custom surface reconstruction software and saved in colored OBJ format.

## Step 1
Import OpenNL library and use _Least Squares Conformal Maps_ algorithm for mesh parametrization.
http://alice.loria.fr/index.php/software/4-library/23-opennl.html

## Step 2
Import Libpng library from VCPKG for creating and saving png files

## Step 3
Implement Interpolated Triangle drawing for the creation of the texture maps
https://www.scratchapixel.com/lessons/3d-basic-rendering/rasterization-practical-implementation/rasterization-stage

<img src="./screenshots/interpolated-triangle.png" width="200" height="200" />

## Step 4
Investigate Mesh cutting algorithms



### Contributors
Patrick Abadi, Daniel Packard
