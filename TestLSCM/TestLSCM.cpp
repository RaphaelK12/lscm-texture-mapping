// TestLSCM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "LSCM.h"
#include "pngio.h"
#include "ImageDraw.h"
#include "ScopeTimer.h"
#include "Helpers.h"

#include <geogram/mesh/mesh.h>
#include <geogram/mesh/mesh_io.h>

using namespace TEX_MAPPER;
using namespace GEO;

int main( int argc, char** argv )
{

  std::string inputFilename = "c:\\meshes\\meshlab\\manifold-mesh.obj";
  //std::string inputFilename = "c:\\meshes\\meshlab\\LSCM_bunny.obj";
  std::string outputFilename = "c:\\meshes\\output.obj";
  std::string outputTextureFilename = "c:\\meshes\\output.png";

  bool spectral = false;
  bool OK = true;
  std::vector<std::string> filenames;

  Mesh mesh;
  MeshIOFlags flags;

  if (mesh_load ( inputFilename, mesh, flags )) 
  {
    
  }
  else
  {
    DebugOut ( "mesh_load failed" );
  }

  /*nlInitialize ( argc, argv );

  IndexedMesh mesh;
  std::cout << "Loading " << inputFilename << "   ..." << std::endl;
  mesh.load ( inputFilename );

  try
  {
    LSCM lscm ( mesh );
    lscm.set_spectral ( false );
    lscm.apply ();

    std::cout << "Saving " << outputFilename << "   ..." << std::endl;
    mesh.save ( outputFilename );

    std::cout << "Saving " << outputTextureFilename << "   ..." << std::endl;
    mesh.SaveTexture ( outputTextureFilename, 1024 );
  }
  catch (const std::exception & e)
  {
    std::cout << "Exception: " << e.what ();
  }*/

 
  DebugOut ( "Done" );

  char i = 0;

  std::cin >> i;

  return 1;
}

