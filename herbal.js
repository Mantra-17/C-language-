// scripts.js

// Function to initialize a 3D scene using Three.js
function init3DModel() {
    const scene = new THREE.Scene();
    const camera = new THREE.PerspectiveCamera(75, window.innerWidth / window.innerHeight, 0.1, 1000);
    const renderer = new THREE.WebGLRenderer();

    const container = document.getElementById('3d-model-container');
    renderer.setSize(container.offsetWidth, container.offsetHeight);
    container.appendChild(renderer.domElement);

    const geometry = new THREE.BoxGeometry();
    const material = new THREE.MeshBasicMaterial({ color: 0x00ff00 });
    const cube = new THREE.Mesh(geometry, material);
    scene.add(cube);

    camera.position.z = 5;

    function animate() {
        requestAnimationFrame(animate);
        cube.rotation.x += 0.01;
        cube.rotation.y += 0.01;
        renderer.render(scene, camera);
    }

    animate();
}

window.onload = function() {
    init3DModel();
}

// Function to search and filter plants based on input
function searchPlants() {
    const query = document.getElementById('search').value.toLowerCase();
    // Sample data for demonstration (would be replaced with actual data)
    const plants = [
        { name: "Tulsi", botanicalName: "Ocimum tenuiflorum", uses: "Immunity", habitat: "Tropical", cultivation: "Easy" },
        { name: "Neem", botanicalName: "Azadirachta indica", uses: "Skin Care", habitat: "Dry Areas", cultivation: "Moderate" }
    ];

    const result = plants.find(plant => plant.name.toLowerCase().includes(query));
    if (result) {
        document.getElementById('plant-name').textContent = `Name: ${result.name}`;
        document.getElementById('botanical-name').textContent = `Botanical Name: ${result.botanicalName}`;
        document.getElementById('medicinal-uses').textContent = `Uses: ${result.uses}`;
        document.getElementById('habitat').textContent = `Habitat: ${result.habitat}`;
        document.getElementById('cultivation').textContent = `Cultivation: ${result.cultivation}`;
    } else {
        alert('Plant not found!');
    }
}