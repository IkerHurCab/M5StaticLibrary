#include <iostream>
#include "pch.h"
#include "framework.h"
#include "ListaCompraLib.h"

namespace ListaCompraLib {

	int answer = 0;

	void Compras::RecetasCarne() {

		do
		{

		std::cout << "0. Salir\n1. Filete mignon\n2. Pollo a la parrilla\n3. Costillas a la barbacoa\n4. Chuletas de cerdo al horno\n5. Estofado de ternera\n";
		std::cin >> answer;

		switch (answer)
		{
		case 0:
			std::cout << "";
			break;


		case 1:
			std::cout << "Receta: Filete Mignon\n\n";
			std::cout << "1. Precalienta el horno a 200 grados.\n";
			std::cout << "2. Sazona los filetes con sal y pimienta.\n";
			std::cout << "3. Calienta una sartén a fuego medio-alto con un poco de aceite.\n";
			std::cout << "4. Agrega los filetes y cocina de 3 a 4 minutos por cada lado para dorarlos.\n";
			std::cout << "5. Transfiere los filetes a una bandeja para hornear y cocina en el horno precalentado durante 10-12 minutos para un filete medio.\n";
			std::cout << "6. Retira del horno y deja reposar durante unos minutos antes de servir.\n\n";
		
			break;

		case 2: 
			std::cout << "Receta: Pollo a la Parrilla\n\n";
			std::cout << "1. Sazona las piezas de pollo con sal, pimienta y tus condimentos favoritos.\n";
			std::cout << "2. Precalienta la parrilla a fuego medio-alto.\n";
			std::cout << "3. Coloca las piezas de pollo en la parrilla caliente.\n";
			std::cout << "4. Cocina durante 6-8 minutos por cada lado o hasta que estén completamente cocidas.\n";
			std::cout << "5. Retira el pollo de la parrilla y deja reposar durante unos minutos antes de servir.\n\n";

			break;

		case 3:
			std::cout << "Receta: Costillas a la Barbacoa\n\n";
			std::cout << "1. Sazona las costillas con una mezcla de especias y sal.\n";
			std::cout << "2. Precalienta el horno a 150 grados.\n";
			std::cout << "3. Coloca las costillas en una bandeja para hornear.\n";
			std::cout << "4. Cubre las costillas con salsa barbacoa.\n";
			std::cout << "5. Hornea durante 2-3 horas o hasta que esten tiernas.\n\n";

			break;

		case 4:
			std::cout << "Receta: Chuletas de Cerdo al Horno\n\n";
			std::cout << "1. Precalienta el horno a 180 grados.\n";
			std::cout << "2. Sazona las chuletas con sal, pimienta y tus especias favoritas.\n";
			std::cout << "3. Coloca las chuletas en una bandeja para hornear.\n";
			std::cout << "4. Hornea durante 25-30 minutos o hasta que esten cocidas por completo.\n";
			std::cout << "5. Retira del horno y deja reposar unos minutos antes de servir.\n\n";

			break;

		case 5:
			std::cout << "Receta: Estofado de Ternera\n\n";
			std::cout << "1. Corta la carne de ternera en trozos medianos.\n";
			std::cout << "2. En una olla grande, dora la carne en un poco de aceite caliente.\n";
			std::cout << "3. Agrega cebolla, zanahorias, apio y ajo picados a la olla.\n";
			std::cout << "4. Vierte caldo de carne y vino tinto sobre la carne y las verduras.\n";
			std::cout << "5. Cocina a fuego lento durante 2-3 horas o hasta que la carne este tierna.\n\n";

			break;

		default:
			std::cout << "Opcion incorrecta.\n";

			break;
		}

		} while (answer != 0);
	}

	void Compras::RecetasPescado() {

	do
	{
		std::cout << "0. Salir\n1. Salmon al horno\n2. Ceviche de pescado\n3. Atun a la plancha\n4. Paella de mariscos y pescado\n5. Tacos de pescado\n";
		std::cin >> answer;

		switch (answer)
		{
		case 0:
			std::cout << "";
			break;

		case 1:
			std::cout << "Receta: Salmon al Horno\n";
			std::cout << "1. Precalienta el horno a 200 grados.\n";
			std::cout << "2. Coloca los filetes de salmon en una bandeja para hornear.\n";
			std::cout << "3. Sazona con sal, pimienta y hierbas al gusto.\n";
			std::cout << "4. Rocia con un poco de aceite de oliva.\n";
			std::cout << "5. Hornea durante 12-15 minutos o hasta que el salmon este cocido.\n";
			std::cout << "6. Sirve caliente con rodajas de limon.\n\n";

			break;

		case 2: 
			std::cout << "Receta: Ceviche de Pescado\n";
			std::cout << "1. Corta el pescado en trozos pequeños y colocalo en un tazon.\n";
			std::cout << "2. Exprime jugo de limon fresco sobre el pescado hasta cubrirlo completamente.\n";
			std::cout << "3. Agrega cebolla morada, tomate, cilantro y ajo al gusto.\n";
			std::cout << "4. Deja reposar en el refrigerador durante al menos 30 minutos para marinar.\n";
			std::cout << "5. Sirve frio con rodajas de aguacate y chips de maiz.\n\n";

			break;

		case 3: 
			std::cout << "Receta: Atun a la Plancha\n";
			std::cout << "1. Sazona los filetes de atun con sal y pimienta.\n";
			std::cout << "2. Calienta una sarten a fuego medio-alto con un poco de aceite de oliva.\n";
			std::cout << "3. Coloca los filetes de atun en la sarten caliente.\n";
			std::cout << "4. Cocina durante 2-3 minutos por cada lado para sellar por fuera pero dejar el interior rosado.\n";
			std::cout << "5. Sirve caliente con una salsa de soja y jengibre o una salsa de limon y hierbas.\n\n";

			break;

		case 4: 
			std::cout << "Receta: Paella de Mariscos y Pescado\n";
			std::cout << "1. Prepara un sofrito con cebolla, pimiento rojo, ajo y tomate en una paellera.\n";
			std::cout << "2. Agrega arroz y caldo de pescado a la paellera y cocina a fuego medio durante 15 minutos.\n";
			std::cout << "3. Coloca los mariscos (mejillones, camarones, calamares...) y el pescado (merluza, gambas...) sobre el arroz.\n";
			std::cout << "4. Cocina durante otros 10-15 minutos hasta que el arroz este cocido y los mariscos estén abiertos.\n";
			std::cout << "5. Decora con rodajas de limon y perejil fresco antes de servir.\n\n";

			break;

		case 5:
			std::cout << "Receta: Tacos de Pescado\n";
			std::cout << "1. Prepara una mezcla de especias para el pescado (paprika, comino, ajo en polvo, sal, pimienta).\n";
			std::cout << "2. Marina los filetes de pescado en la mezcla de especias durante al menos 30 minutos.\n";
			std::cout << "3. Calienta una sarten a fuego medio-alto con un poco de aceite.\n";
			std::cout << "4. Cocina los filetes de pescado durante 3-4 minutos por cada lado hasta que esten dorados y cocidos.\n";
			std::cout << "5. Sirve los filetes de pescado en tortillas calientes con salsa, repollo rallado y crema agria.\n\n";

			break;

		default:
			std::cout << "Opcion incorrecta.\n";
			break;
		}

	} while (answer != 0);

	}

	void Compras::RecetasFruta() {

		do
		{
			std::cout << "0. Salir\n1. Ensalada de frutas\n2. Batido de frutas\n3. Shake de frutas\n4. Sorbete de limon\n5. Tarta de manzana\n";
			std::cin >> answer;

			switch (answer)
			{
			case 0:
				std::cout << "";
				break;

			case 1:
				std::cout << "Receta: Ensalada de Frutas\n";
				std::cout << "1. Corta las frutas en trozos pequeños (platano, fresa, uva...).\n";
				std::cout << "2. Mezcla las frutas en un tazon grande.\n";
				std::cout << "3. Exprime un poco de jugo de limon sobre las frutas para realzar el sabor.\n";
				std::cout << "4. Opcionalmente, agrega un poco de miel o azucar para endulzar.\n";
				std::cout << "5. Refrigera durante al menos 30 minutos antes de servir.\n\n";

				break;

			case 2:
				std::cout << "Receta: Batido de Frutas\n";
				std::cout << "1. Coloca en la licuadora frutas frescas (plátano, fresas, mango, piña).\n";
				std::cout << "2. Agrega un poco de yogur natural y jugo de naranja.\n";
				std::cout << "3. Licua hasta obtener una consistencia suave y homogenea.\n";
				std::cout << "4. Prueba y ajusta el dulzor si es necesario con miel o azucar.\n";
				std::cout << "5. Sirve en vasos con una rodaja de fruta para decorar.\n\n";

				break;

			case 3:
				std::cout << "Receta: Shake de Frutas\n";
				std::cout << "1. Pela y corta las frutas en trozos pequenos (naranja, pina, manzana...).\n";
				std::cout << "2. Pasa las frutas por el extractor de zumo.\n";
				std::cout << "3. Mezcla los jugos obtenidos y refrigera si lo prefieres frio.\n";
				std::cout << "4. Agrega hielo si deseas una bebida mas refrescante.\n";
				std::cout << "5. Sirve en vasos altos y decora con una rodaja de naranja o limon.\n\n";

				break;

			case 4:
				std::cout << "Receta: Sorbete de Limon\n";
				std::cout << "1. Prepara un almibar hirviendo agua y azucar hasta que se disuelva.\n";
				std::cout << "2. Deja enfriar el almibar y mezcla con jugo de limon fresco.\n";
				std::cout << "3. Vierte la mezcla en una maquina para hacer helados y congela segun las instrucciones.\n";
				std::cout << "4. Transfiere el sorbete a un recipiente hermetico y congela durante unas horas.\n";
				std::cout << "5. Sirve en copas frias y decora con hojas de menta fresca.\n\n";

				break;

			case 5:
				std::cout << "Receta: Tarta de Manzana\n";
				std::cout << "1. Extiende masa de hojaldre en un molde para tarta.\n";
				std::cout << "2. Cubre la masa con rodajas finas de manzana y espolvorea con azucar y canela.\n";
				std::cout << "3. Hornea a 180 grados durante 25-30 minutos o hasta que la masa este dorada.\n";
				std::cout << "4. Calienta mermelada de albaricoque en una cacerola y pinta la superficie de la tarta con ella.\n";
				std::cout << "5. Deja enfriar antes de servir y opcionalmente, sirve con helado de vainilla.\n\n";

				break;

			default:
				std::cout << "Opcion incorrecta.\n";
				break;
			}

		} while (answer != 0);


	}
	void Compras::RecetasVerdura() {

		do
		{
			std::cout << "0. Salir\n1. Ensalada de verduras\n2. Sopa de verduras\n3. Guacamole\n4. Ensalada caprese\n5. Ratatouille\n";
			std::cin >> answer;

			switch (answer)
			{
			case 0:
				std::cout << "";
				break;

			case 1:
				std::cout << "Receta: Ensalada de Verduras\n";
				std::cout << "1. Lava y corta en trozos las verduras frescas (lechuga, tomate, pepino, zanahoria...).\n";
				std::cout << "2. Coloca las verduras en un tazon grande para ensalada.\n";
				std::cout << "3. Prepara un aderezo mezclando aceite de oliva, vinagre, mostaza, sal y pimienta al gusto.\n";
				std::cout << "4. Vierte el aderezo sobre las verduras y mezcla bien.\n";
				std::cout << "5. Sirve la ensalada en platos individuales y decora con hierbas frescas.\n\n";

				break;

			case 2:
				std::cout << "Receta: Sopa de Verduras\n";
				std::cout << "1. Corta en trozos las verduras frescas (zanahoria, cebolla, apio, calabacín...).\n";
				std::cout << "2. Calienta un poco de aceite en una olla grande y saltea las verduras hasta que esten tiernas.\n";
				std::cout << "3. Agrega caldo de verduras y hierbas frescas (tomillo, laurel, perejil).\n";
				std::cout << "4. Deja cocinar a fuego lento durante 20-25 minutos.\n";
				std::cout << "5. Sirve caliente con un poco de queso rallado y pan tostado.\n\n";

				break;

			case 3:
				std::cout << "Receta: Guacamole\n";
				std::cout << "1. Machaca aguacates maduros en un tazon hasta obtener una consistencia suave.\n";
				std::cout << "2. Agrega tomate, cebolla, cilantro, jugo de limon y sal al gusto.\n";
				std::cout << "3. Mezcla bien todos los ingredientes hasta que esten bien combinados.\n";
				std::cout << "4. Prueba y ajusta la sazon segun sea necesario.\n";
				std::cout << "5. Sirve con nachos, tortillas de maiz o como acompanamiento de platos mexicanos.\n\n";

				break;

			case 4:
				std::cout << "Receta: Ensalada Caprese\n";
				std::cout << "1. Corta tomates frescos en rodajas y mozzarella en rebanadas.\n";
				std::cout << "2. Alterna capas de tomate, mozzarella y hojas de albahaca en un plato.\n";
				std::cout << "3. Espolvorea con sal y pimienta al gusto.\n";
				std::cout << "4. Riega con aceite de oliva y vinagre.\n";
				std::cout << "5. Sirve como aperitivo fresco o como guarnicion ligera.\n\n";

				break;

			case 5:
				std::cout << "Receta: Ratatouille\n";
				std::cout << "1. Corta en rodajas finas berenjena, calabacin, tomate y pimiento rojo y amarillo.\n";
				std::cout << "2. En una sarten grande, saltea las verduras por separado con un poco de aceite hasta que esten doradas.\n";
				std::cout << "3. En una cacerola grande, coloca una capa de rodajas de tomate en el fondo.\n";
				std::cout << "4. Alterna capas de las otras verduras sazonadas con sal, pimienta, ajo y hierbas frescas como tomillo y romero.\n";
				std::cout << "5. Hornea a 180 grados durante 40-50 minutos o hasta que las verduras esten tiernas.\n";
				std::cout << "6. Sirve caliente como plato principal o como guarnicion.\n\n";

				break;

			default:
				std::cout << "Opcion incorrecta.\n";
				break;
			}

		} while (answer != 0);


	}

	void Compras::RecetasVarias() {

		do
		{
			std::cout << "0. Salir\n1. Huevos rellenos\n2. Pasta carbonara\n3. Bizcocho de yogur\n4. Tortitas de cacao\n5. Ensalada de frutos rojos\n";
			std::cin >> answer;

			switch (answer)
			{
			case 0: 
				std::cout << "";
				break;

			case 1:
				std::cout << "Receta: Huevos Rellenos\n";
				std::cout << "1. Cuece huevos en agua hirviendo durante 10 minutos, luego enfria y pelalos.\n";
				std::cout << "2. Corta los huevos por la mitad y retira las yemas.\n";
				std::cout << "3. Mezcla las yemas con mayonesa, mostaza, sal y pimienta.\n";
				std::cout << "4. Rellena las mitades de huevo con la mezcla.\n";
				std::cout << "5. Decora con perejil picado y sirve frio.\n\n";

				break;

			case 2:
				std::cout << "Receta: Pasta Carbonara\n";
				std::cout << "1. Hierve agua con sal y cocina la pasta segun las instrucciones del paquete.\n";
				std::cout << "2. En una sarten, dora el bacon cortado en trozos con un poco de aceite.\n";
				std::cout << "3. En un tazon, mezcla huevos batidos con queso rallado y pimienta.\n";
				std::cout << "4. Escurre la pasta y anadela a la sarten con el bacon.\n";
				std::cout << "5. Retira del fuego y agrega la mezcla de huevos y queso, revolviendo rapidamente.\n\n";

				break;

			case 3:
				std::cout << "Receta: Bizcocho de Yogur\n";
				std::cout << "1. Precalienta el horno a 180 grados y engrasa un molde para pastel.\n";
				std::cout << "2. Mezcla harina, azucar, yogur, huevos, aceite y levadura en un tazon.\n";
				std::cout << "3. Vierte la masa en el molde y hornea durante 30-35 minutos.\n";
				std::cout << "4. Deja enfriar antes de desmoldar y espolvorea con azucar glass.\n\n";

				break;

			case 4:
				std::cout << "Receta: Tortitas de Cacao\n";
				std::cout << "1. Mezcla harina, cacao en polvo, azucar, sal y levadura en un tazon.\n";
				std::cout << "2. Agrega leche, huevos y mantequilla derretida a la mezcla y bate hasta que este suave.\n";
				std::cout << "3. Calienta una sarten y vierte pequeñas porciones de masa para hacer las tortitas.\n";
				std::cout << "4. Cocina hasta que aparezcan burbujas en la superficie, luego dale la vuelta y cocina por el otro lado.\n";
				std::cout << "5. Sirve caliente con sirope de arce y frutos rojos.\n\n";


				break;

			case 5:
				std::cout << "Receta: Ensalada de Frutos Rojos\n";
				std::cout << "1. Mezcla frutos rojos (fresas, frambuesas, moras...) con hojas de lechuga y espinacas.\n";
				std::cout << "2. Prepara un aderezo con vinagre, aceite, miel y mostaza.\n";
				std::cout << "3. Alina la ensalada con el aderezo y mezcla suavemente.\n";
				std::cout << "4. Anade queso de cabra desmenuzado y nueces picadas por encima.\n\n";

				break;

			default:
				std::cout << "Opcion incorrecta.\n";
				break;
			}

		} while (answer != 0);

	}

	void Compras::Recetas(std::string listaCompra[], int cantidad[], int counter) {

		
		std::string fruta[40] = {"Fruta", "Manzana", "Platano", "Naranja", "Uva", "Fresa", "Kiwi", "Pina", "Mango", "Melon", "Sandia", "Papaya", "Cereza", "Pera", "Limon", "Mandarina",
			"Ciruela", "Frambuesa", "Durazno", "Toronja", "Maracuya", "Granada", "Guayaba", "Higo", "Lichi", "Carambola", "Pitahaya", "Melocoton", "Grosella", "Membrillo", "Arandano",
		"Acerola", "Noni", "Tamarindo", "Kumquat", "Nashi", "Chirimoya", "Pomelo", "Uchuva", "Guanabana"};

		std::string verdura[32] = {"Verdura", "Zanahoria", "Brocoli", "Espinaca", "Lechuga", "Tomate", "Pepino", "Coliflor", "Pimiento", "Calabacin", "Cebolla", "Papa", "Calabaza", "Apio",
			"Judia", "Berenjena", "Esparrago", "Acelga", "Remolacha", "Maiz", "Rabano", "Patata", "Alcachofa", "Chayote", "Col", "Nabo", "Hinojo", "Rucula", "Berro", "Repollo", "Ajo", "Guisante"};

		std::string carne[41] = {"Carne", "Res", "Cerdo", "Pollo", "Pavo", "Cordero", "Conejo", "Pato", "Ternera", "Bisonte", "Cabra", "Venado", "Jabali", "Codorniz", "Ganso", "Pichon", "Liebre", "Ciervo",
			"Carnero", "Codorniz", "Faisan", "Tofu", "Chorizo", "Salami", "Jamon", "Mortadela", "Panceta", "Longaniza", "Cecina", "Chuleta", "Hamburguesa",
				"Salchicha", "Filete", "Entrecot", "Costilla", "Morcilla", "Butifarra", "Morcon", "Pastrami", "Salchichon", "Sobrasada" };

		std::string pescado[38] = {"Pez", "Pescado", "Salmon", "Atun", "Bacalao", "Merluza", "Dorado", "Trucha", "Sardina", "Lubina", "Boqueron", "Anchoa", "Lenguado", "Besugo", "Robalo", "Congrio",
		"Pargo", "Mero", "Raya", "Cabracho", "Sargo", "Carpa","Fletan", "Tilapia", "Rape", "Abadejo", "Cherne", "Esturion", "Arenque", "Anguila", "Boga", "Bonito", "Calamar", "Pulpo",
		"Langosta", "Cangrejo", "Almeja", "Mejillon" };

		std::string varios[20] = {"Huevo", "Leche", "Queso", "Yogur", "Mantequilla", "Nata", "Aceite", "Arroz", "Pasta", "Pan", "Azucar", "Sal", "Harina", "Vinagre", "Cafe",
		"Te", "Miel", "Cacao", "Cereal", "Fruto"};

		int random;
		int frutas = 0;
		int verduras = 0;
		int carnes = 0;
		int variedad = 0;
		int pescados= 0;


		for (int i = 0; i < counter; i++)
		{

			for (int j = 0; j < 39; j++)
			{
				if (listaCompra[i] == fruta[j]) {
					frutas++;
				}
			}

			for (int j = 0; j < 31; j++)
			{
				if (listaCompra[i] == verdura[j]) {
					verduras++;
				}
			}

			for (int j = 0; j < 40; j++)
			{
				if (listaCompra[i] == carne[j]) {
					carnes++;
				}
			}

			for (int j = 0; j < 36; j++)
			{
				if (listaCompra[i] == pescado[j]) {
					pescados++;
				}
			}

			for (int j = 0; j < 20; j++)
			{
				if (listaCompra[i] == varios[j]) {
					variedad++;
				}
			}
		}

		random = counter - frutas - verduras - carnes - pescados - variedad;


		std::cout << "\nHe detectado los siguientes elementos en tu lista de la compra:\n\n";
		std::cout << "Carne: " << carnes << "\n";
		std::cout << "Pescado: " << pescados << "\n";
		std::cout << "Fruta: " << frutas << "\n";
		std::cout << "Verdura: " << verduras << "\n";
		std::cout << "Productos varios: " << variedad << "\n";
		std::cout << "Resto: " << random << "\n\n";


		if (carnes > pescados && carnes > frutas && carnes > verduras && carnes > variedad && carnes > random)
		{
			std::cout << "Ya que tu producto mas comun es carne, podrias cocinar algunas de las siguientes recetas:\n\n";
			Compras::RecetasCarne();
		}
		else if (pescados > carnes && pescados > frutas && pescados > verduras && pescados > variedad && pescados > random)
		{
			std::cout << "Ya que tu producto mas comun es pescado, podrias cocinar algunas de las siguientes recetas:\n\n";
			Compras::RecetasPescado();
		}

		else if (frutas > carnes && frutas > pescados && frutas > verduras && frutas > variedad && frutas > random)
		{
			std::cout << "Ya que tu producto mas comun es fruta, podrias cocinar algunas de las siguientes recetas:\n\n";
			Compras::RecetasFruta();
		}

		else if (verduras > carnes && verduras > frutas && verduras > pescados && verduras > variedad && verduras > random)
		{
			std::cout << "Ya que tu producto mas comun es verdura, podrias cocinar algunas de las siguientes recetas:\n\n";
			Compras::RecetasVerdura();
		}

		else if (variedad > carnes && variedad > frutas && variedad > pescados && variedad > verduras && variedad > random)
		{
			std::cout << "Ya que en tu lista de la compra hay gran variedad de productos, podrias concinar algunas de las siguientes recetas:\n\n";
			Compras::RecetasVarias();
		}

		else {
			std::cout << "Tus productos mas comunes no son detectados. Productos aceptados: frutas, verduras, carne, pescado e ingredientes basicos (huevos, leche, cereales, arroz...).\n";
		}


		
		
	}

	void Compras::Menu() {
		std::string listaCompra[11];
		int cantidad[11];
		std::string item;
		int counter = 0;
		bool rep = false;
		int quantity;
		std::cout << "Empieza a escribir tu lista de la compra! Pon lo que quieras y la cantidad.\nSi quieres salir, escribe el comando 'exit' (no te pases de mas de 10 items, por favor. Y nada de frases, solo palabras).\n";

		while (!item._Equal("exit") && counter <= 10 && answer != 2)
		{
			std::cout << "Que quieres hacer?\n1. Anadir un objeto a la lista\n2. Salir\n";
			std::cin >> answer;

			if (answer == 1) {
				std::cout << "Escribe el producto que quieras (escribe exit para salir): ";
				std::cin >> item;


				for (int i = 0; i < item.length(); i++)
				{
					item[i] = tolower(item[i]);
				}

				if (!item._Equal("exit"))
				{
					if (item[item.length() - 1] == 's' && item[item.length() - 2] == 'e' &&

						(item[item.length() - 3] == 'l' || item[item.length() - 3] == 'n'
							|| item[item.length() - 3] == 'm' || item[item.length() - 3] == 'j'
							|| item[item.length() - 3] == 'd' || item[item.length() - 3] == 'r'
							|| item[item.length() - 3] == 'y'))
					{
						item = item.substr(0, item.length() - 2);
					}

					else if (item[item.length() - 1] == 's' && (item[item.length() - 2] == 'a' ||
						item[item.length() - 2] == 'e' ||
						item[item.length() - 2] == 'i' ||
						item[item.length() - 2] == 'o' ||
						item[item.length() - 2] == 'u'))
					{
						item = item.substr(0, item.length() - 1);
					}

					else if (item.substr(item.length() - 3, 3)._Equal("ces")) {
						item = item.substr(0, item.length() - 3) + "z";
					}

					std::cout << "Escribe la cantidad: ";
					std::cin >> quantity;

					if (quantity > 0)
					{
						for (int i = 0; i < counter; i++)
						{
							if (item == listaCompra[i]) {
								listaCompra[i] = item;
								cantidad[i] = quantity;
								rep = true;
							}
						}

						if (!rep) {

							listaCompra[counter] = item;
							cantidad[counter] = quantity;
							counter++;
						}

						rep = false;
					}

				}

			}

		}


		if (counter <= 10 && counter > 0)
		{

			std::cout << "Aqui tienes tu lista de la compra completa:\n";

			for (int i = 0; i < counter; i++)
			{

				listaCompra[i][0] = toupper(listaCompra[i][0]);


				if (listaCompra[i][listaCompra[i].length() - 1] != 'a' && 
					listaCompra[i][listaCompra[i].length() - 1] != 'e' &&
					listaCompra[i][listaCompra[i].length() - 1] != 'i' &&
					listaCompra[i][listaCompra[i].length() - 1] != 'o' &&
					listaCompra[i][listaCompra[i].length() - 1] != 'u' &&
					listaCompra[i][listaCompra[i].length() - 1] != 'z' &&
					listaCompra[i][listaCompra[i].length() - 1] != 's')
				{
					std::cout << listaCompra[i] << "es (" << cantidad[i] << ")\n";
					
				}

				else if (listaCompra[i][listaCompra[i].length() - 1] == 'z') {
					std::cout << listaCompra[i].substr(0,listaCompra[i].length() - 1) << "ces (" << cantidad[i] << ")\n";
				}

				else if (listaCompra[i][listaCompra[i].length() - 1] == 's' || listaCompra[i][listaCompra[i].length() - 1] == 'x') {
					std::cout << listaCompra[i] << " (" << cantidad[i] << ")\n";
				}

				else  {
					std::cout << listaCompra[i] << "s (" << cantidad[i] << ")\n";
				}

			}
			system("pause");
			Compras::Recetas(listaCompra, cantidad, counter);
			
		}

		else if (counter == 0) {
			std::cout << "Programo una lista de la compra para que no me pongas nada? Verguenza me daria.\n";
		}

		else {
			system("cls");
			std::cout << "Que parte de no te pases de 10 items no has entendido? Sin recetas por bobo.\n";
		}


	}
}