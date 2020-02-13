/**
 * Setup all visualization elements when the page is loaded.
 */
 function connect(viewer, ip) {
  // Connect to ROS.
  var ros = new ROSLIB.Ros({
    url : ip
  });

  // Setup a client to listen to TFs.
  var tfClient = new ROSLIB.TFClient({
    ros : ros,
    angularThres : 0.01,
    transThres : 0.01,
    rate : 10.0
  });

  // Setup the URDF client.
  var urdfClient = new ROS3D.UrdfClient({
    ros : ros,
    tfClient : tfClient,
    path: 'qrc:/',
    rootObject : viewer.scene,
    loader : ROS3D.COLLADA_LOADER
  });
}
